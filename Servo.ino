/*
  Controlling Servo Motor
  by Abdullah Fayad
*/

#include <Servo.h> //include the servo library

Servo s;  // create object of servo type

void setup() {
  s.attach(6);  // attaches the servo on pin 6 (PWM pin)
}

void loop() {
  for (int i = 0; i <= 90; i += 1) { // goes from 0 degrees to 90 degrees and each step is 1 degree
    s.write(i);              // tell servo to go to position in variable 'i'
    delay(20);                       // waits 20ms for the servo to reach the position
  }
  for (int i = 180; i >= 0; i -= 2) { // goes from 180 degrees to 0 degrees and each step is 2 degrees
    s.write(i);              // tell servo to go to position in variable 'i'
    delay(30);                       // waits 30ms for the servo to reach the position
  }
}
