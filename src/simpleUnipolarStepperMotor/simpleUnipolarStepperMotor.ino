/* 
 *  Rotate a unipolar stepper motor
 *  Motor could be connected directly or through some driver
 */


/* Unipolar stepper motors have 4 wires */
const int in4 = A0;
const int in3 = A1;
const int in2 = A2;
const int in1 = A3;

const int delayTime = 10;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {

  /* In each step turn on only one phase */
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime); // Stepper motors can't go too fast

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(delayTime);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(delayTime);
  
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(delayTime);
}
