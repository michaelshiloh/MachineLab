// Date and time functions using a DS1307 RTC connected via I2C and Wire lib
#include "RTClib.h"

// Pin definitions
// Note that rtc uses SDA and SCL which is pins A4 and A5 so don't use them

// Each project has a trigger and a done signal
const int P1TriggerPin = 2;
const int P1DonePin = 3;
const int P2TriggerPin = 4;
const int P2DonePin = 5;
const int P3TriggerPin = 6;
const int P3DonePin = 7;
const int P4TriggerPin = 8;
const int P4DonePin = 9;
const int P5TriggerPin = 10;
const int P5DonePin = 11;

// For debugging our own trigger and NeoPixels for output
const int myTriggerPin = 12;
const int neoPixelsPin = 13;

RTC_DS1307 rtc;

void setup () {
  Serial.begin(9600);

  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1) delay(10);
  }

  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running, let's set the time!");
    // When time needs to be set on a new device, or after a power loss, the
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));
  }

  // When time needs to be re-set on a previously configured device, the
  // following line sets the RTC to the date & time this sketch was compiled
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // This line sets the RTC with an explicit date & time, for example to set
  // January 21, 2014 at 3am you would call:
  // rtc.adjust(DateTime(2014, 1, 21, 3, 0, 0));

  pinMode (P1TriggerPin, OUTPUT);
  pinMode (P2TriggerPin, OUTPUT);
  pinMode (P3TriggerPin, OUTPUT);
  pinMode (P4TriggerPin, OUTPUT);
  pinMode (P5TriggerPin, OUTPUT);
  
  digitalWrite(P1TriggerPin, LOW);
  digitalWrite(P2TriggerPin, LOW);
  digitalWrite(P3TriggerPin, LOW);
  digitalWrite(P4TriggerPin, LOW);
  digitalWrite(P5TriggerPin, LOW);
}

void loop () {
    DateTime now = rtc.now();

    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
    
    if (15 == now.minute()) {
      Serial.println("Quarter hour");
      triggerProjects();
    }
    if (30 == now.minute()) {
      Serial.println("Half hour");
      triggerProjects();
    }
    if (0 == now.minute()) {
      Serial.println("On the hour");
      triggerProjects();
    }

    delay(1000);
}

void triggerProjects() {
  digitalWrite(P1TriggerPin, HIGH);
  while (!digitalRead(P1DonePin)) {
    delay(1000);
  }
  digitalWrite(P1TriggerPin, LOW);
}
