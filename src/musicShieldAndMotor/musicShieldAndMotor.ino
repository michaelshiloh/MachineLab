/***************************************************

  Example controller for Machine Lab

  Based on the Adafruit Music Maker Shield example player_simple

  Change log:

  26 Mar 2024 - ms - added pins for L298, servo motors, and Neopixels


 ****************************************************/

// include SPI, MP3 and SD libraries
#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>

// define the pins used
#define CLK 13       // SPI Clock, shared with SD card
#define MISO 12      // Input data, from VS1053/SD card
#define MOSI 11      // Output data, to VS1053/SD card
// Connect CLK, MISO and MOSI to hardware SPI pins.
// See http://arduino.cc/en/Reference/SPI "Connections"

// These are the pins used for the breakout example
#define BREAKOUT_RESET  9      // VS1053 reset pin (output)
#define BREAKOUT_CS     10     // VS1053 chip select pin (output)
#define BREAKOUT_DCS    8      // VS1053 Data/command select pin (output)
// These are the pins used for the music maker shield
#define SHIELD_RESET  -1      // VS1053 reset pin (unused!)
#define SHIELD_CS     7      // VS1053 chip select pin (output)
#define SHIELD_DCS    6      // VS1053 Data/command select pin (output)

// These are common pins between breakout and shield
#define CARDCS 4     // Card chip select pin
// DREQ should be an Int pin, see http://arduino.cc/en/Reference/attachInterrupt
#define DREQ 3       // VS1053 Data request, ideally an Interrupt pin

Adafruit_VS1053_FilePlayer musicPlayer =
  // create breakout-example object!
  // Adafruit_VS1053_FilePlayer(BREAKOUT_RESET, BREAKOUT_CS, BREAKOUT_DCS, DREQ, CARDCS);
  // create shield-example object!
  Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);

// Pins for L298 motor controller
const int L298_in1 = 10;
const int L298_in2 = 2;
const int L298_in3 = 9;
const int L298_in4 = 8;

// Pins for servo motors
const int servoBirds = A0;
const int servoClouds = A1;

// Pin for Neopixels
const int neoPixels = A2;

// Pins for communicating with the master clock
const int triggerPin = A3;  // triggers this activity
const int donePin = A4;      // signals that I'm done


void setup() {
  Serial.begin(9600);

  // Don't forget to set up the outputs
  pinMode (donePin, OUTPUT);
  pinMode (L298_in1, OUTPUT);
  pinMode (L298_in2, OUTPUT);
  pinMode (L298_in3, OUTPUT);
  pinMode (L298_in4, OUTPUT);

  if (! musicPlayer.begin()) { // initialise the music player
    Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
    while (1);
  }
  Serial.println(F("VS1053 found"));

  if (!SD.begin(CARDCS)) {
    Serial.println(F("SD failed, or not present"));
    while (1);  // don't do anything more
  }

  // list files
  printDirectory(SD.open("/"), 0);

  // Set volume for left, right channels. lower numbers == louder volume!
  musicPlayer.setVolume(20, 20);

  // If DREQ is on an interrupt pin (on uno, #2 or #3) we can do background
  // audio playing
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int

}

void loop() {

  Serial.println("waiting for a trigger");

  // wait for a signal
  if (digitalRead (triggerPin) == HIGH) {
    // turn on the music
    // Play one file, don't return until complete
    Serial.println(F("Playing track 001"));
    musicPlayer.playFullFile("/track001.mp3");

    // now wait for the song to finish
    while (!musicPlayer.stopped()) {
      Serial.println("waiting for song to finish");
      delay(100);
    }
    Serial.println("song  finish");

    // song has finished

    // Now move the motor a little
    digitalWrite (L298_in1, HIGH);
    digitalWrite (L298_in2, LOW);
    delay(2000);
    digitalWrite (L298_in1, LOW);
    digitalWrite (L298_in2, LOW);

    // tell the clock that we're done
    digitalWrite (donePin, HIGH);
    // wait for an acknowledgement from
    // the clock
    while (digitalRead (triggerPin) == HIGH) {
      Serial.println("waiting for acknowedgement");
      delay(100);
    }
    // turn off the signal
    digitalWrite (donePin, LOW);

    delay(100);
  }
} // end of loop


/// File listing helper
void printDirectory(File dir, int numTabs) {
  while (true) {

    File entry =  dir.openNextFile();
    if (! entry) {
      // no more files
      //Serial.println("**nomorefiles**");
      break;
    }
    for (uint8_t i = 0; i < numTabs; i++) {
      Serial.print('\t');
    }
    Serial.print(entry.name());
    if (entry.isDirectory()) {
      Serial.println("/");
      printDirectory(entry, numTabs + 1);
    } else {
      // files have sizes, directories do not
      Serial.print("\t\t");
      Serial.println(entry.size(), DEC);
    }
    entry.close();
  }
}
