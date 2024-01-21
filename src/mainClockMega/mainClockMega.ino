#include "RTClib.h"

RTC_DS1307 rtc;

// Trigger signals to the modules
const int BOATSTRIGGERPIN = 2;
const int MYTHSTRIGGERPIN = 3;
const int FALCONSTRIGGERPIN = 4;
const int SANDTRIGGERPIN = 5;
const int BLOCKSTRIGGERPIN = 6;
const int CUBETRIGGERPIN = 12;

// Done signals from the modules
const int BOATSDONEPIN = 7;
const int MYTHSDONEPIN = 8;
const int FALCONSDONEPIN = 9;
const int SANDDONEPIN = 10;
const int BLOCKSDONEPIN = 11;


const int HOURIN1PIN = 38;
const int HOURIN2PIN = 40;
const int HOURIN3PIN = 42;
const int HOURIN4PIN = 44;

const int MININ1PIN = 50;
const int MININ2PIN = 48;
const int MININ3PIN = 52;
const int MININ4PIN = 46;

// RTC connections
const int RTCPOWERa = 18;
const int RTCPOWERb = 19;
// Pins 20 and 21 are SPI to the RTC

const int MINHANDZEROPIN = 30;
const int HOURHANDZEROPIN = 32;

//Use these Global Variables in your code
int currentTimeHours;
int currentTimeMinutes;
int currentTimeSeconds;

void setup() {

  Serial.begin(9600);

#ifndef ESP8266
  while (!Serial)
    ;  // wait for serial port to connect.
#endif

  // if (!rtc.begin()) {
  //   Serial.println("Couldn't find RTC");
  //   Serial.flush();
  //   abort();
  // }

  pinMode(MININ1PIN, OUTPUT);
  pinMode(MININ2PIN, OUTPUT);
  pinMode(MININ3PIN, OUTPUT);
  pinMode(MININ4PIN, OUTPUT);

  pinMode(HOURIN1PIN, OUTPUT);
  pinMode(HOURIN2PIN, OUTPUT);
  pinMode(HOURIN3PIN, OUTPUT);
  pinMode(HOURIN4PIN, OUTPUT);
}

void loop() {
  //Re-assigning variables every second
  // DateTime now = rtc.now();
  // currentTimeHours = now.hour();
  // currentTimeMinutes = now.minute();
  // currentTimeSeconds = now.second();

  //For testing purposes
  Serial.print(currentTimeHours);
  Serial.print(":");
  Serial.print(currentTimeMinutes);
  Serial.print(":");
  Serial.print(currentTimeSeconds);
  Serial.println();

   oneCycleMin(2);
   oneCycleHour(2);
 
}

void oneCycleMin(int delayAmount) {
  digitalWrite(MININ1PIN, LOW);
  digitalWrite(MININ2PIN, HIGH);
  digitalWrite(MININ3PIN, LOW);
  digitalWrite(MININ4PIN, HIGH);
  delay(delayAmount);

  digitalWrite(MININ1PIN, HIGH);
  digitalWrite(MININ2PIN, LOW);
  digitalWrite(MININ3PIN, LOW);
  digitalWrite(MININ4PIN, HIGH);
  delay(delayAmount);

  digitalWrite(MININ1PIN, HIGH);
  digitalWrite(MININ2PIN, LOW);
  digitalWrite(MININ3PIN, HIGH);
  digitalWrite(MININ4PIN, LOW);
  delay(delayAmount);

  digitalWrite(MININ1PIN, LOW);
  digitalWrite(MININ2PIN, HIGH);
  digitalWrite(MININ3PIN, HIGH);
  digitalWrite(MININ4PIN, LOW);
  delay(delayAmount);
}


void oneCycleHour(int delayAmount) {
  digitalWrite(HOURIN1PIN, LOW);
  digitalWrite(HOURIN2PIN, HIGH);
  digitalWrite(HOURIN3PIN, LOW);
  digitalWrite(HOURIN4PIN, HIGH);
  delay(delayAmount);

  digitalWrite(HOURIN1PIN, HIGH);
  digitalWrite(HOURIN2PIN, LOW);
  digitalWrite(HOURIN3PIN, LOW);
  digitalWrite(HOURIN4PIN, HIGH);
  delay(delayAmount);

  digitalWrite(HOURIN1PIN, HIGH);
  digitalWrite(HOURIN2PIN, LOW);
  digitalWrite(HOURIN3PIN, HIGH);
  digitalWrite(HOURIN4PIN, LOW);
  delay(delayAmount);

  digitalWrite(HOURIN1PIN, LOW);
  digitalWrite(HOURIN2PIN, HIGH);
  digitalWrite(HOURIN3PIN, HIGH);
  digitalWrite(HOURIN4PIN, LOW);
  delay(delayAmount);
}