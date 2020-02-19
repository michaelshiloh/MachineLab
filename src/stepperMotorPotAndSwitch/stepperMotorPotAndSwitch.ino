#include <Wire.h>
#include <Adafruit_MotorShield.h>

Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 2);


void setup() {

  Serial.begin(9600);
  pinMode(7, INPUT);
  AFMS.begin();

}

void loop() {

  int switchPosition;
  int speedControl;

  switchPosition = digitalRead(7);
  speedControl = analogRead(A2); // this goes from 0 to 1023
  myMotor->setSpeed(speedControl / 4);

  if (switchPosition == HIGH) {
    Serial.println("clicked!");
    myMotor->step(50, FORWARD, INTERLEAVE);
  } else {
    Serial.println("not clicked!");
  }
}
