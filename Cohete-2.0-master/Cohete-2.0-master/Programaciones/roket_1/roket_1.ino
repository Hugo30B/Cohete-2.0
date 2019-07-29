#include <Servo.h>
Servo myServo;
int switchState = 0;
void setup() {
  myServo.attach(10);
  myServo.write(90);
}
void loop() {  
delay(1500);
myServo.write(1)
}
