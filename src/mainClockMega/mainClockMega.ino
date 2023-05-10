#include "RTClib.h"

RTC_DS1307 rtc;

const int BOATSTRIGGERPIN 2
const int MYTHSTRIGGERPIN 3
const int FALCONSTRIGGERPIN 4
const int SANDTRIGGERPIN 5
const int BLOCKSTRIGGERPIN 6

const int BOATSDONEPIN 7
const int MYTHSDONEPIN 8
const int FALCONSDONEPIN 9
const int SANDDONEPIN 10
const int BLOCKSDONEPIN 11

const int HOURIN0PIN 12
const int HOURIN1PIN 13
const int HOURIN2PIN 14
const int HOURIN3PIN 15

const int MININ0PIN 16
const int MININ1PIN 17
const int MININ2PIN 18
const int MININ3PIN 19

const int MINHANDZEROPIN 22
const int HOURHANDZEROPIN 23

//Use these Global Variables in your code
int currentTimeHours;
int currentTimeMinutes;
int currentTimeSeconds;

void setup () {
 
  Serial.begin(9600);

#ifndef ESP8266
  while (!Serial); // wait for serial port to connect. 
#endif

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    abort();
  }


 
}

void loop () {
    //Re-assigning variables every second
    DateTime now = rtc.now();
    currentTimeHours = now.hour(); 
    currentTimeMinutes = now.minute();
    currentTimeSeconds = now.second(); 
  
//For testing purposes
    Serial.print(currentTimeHours);
    Serial.print(":");
    Serial.print(currentTimeMinutes);
    Serial.print(":");
    Serial.print(currentTimeSeconds);
    Serial.println(); 

    delay(1000);

    
      
    
}