#include <Servo.h>
Servo myServo;
int switchState = 0;
void setup() {
  myServo.attach(10);
  myServo.write(90);
  pinMode(5,INPUT);
  pinMode(4,OUTPUT);
}
void loop() {  
     switchState = digitalRead(5);
      if (switchState == LOW){
        myServo.write(180); 
 }
 else {    
   digitalWrite(4,LOW);
 }
}
