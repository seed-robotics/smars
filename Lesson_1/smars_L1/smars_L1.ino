#include "AFMotor.h"

#define minDistance 15
#define delayForwards 750
#define delayRotate 300
#define delayLoop 75
#define maxSpeed 75


AF_DCMotor motorR(1);  // right DC Motor
AF_DCMotor motorL(4);  // left DC Motor

void setup() {
  Serial.begin(9600);
  motorR.setSpeed(200);
  motorL.setSpeed(200);
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}

void moveForwards(int timeDelay){
  uint8_t i;
  motorR.run(FORWARD);
  motorL.run(FORWARD);
  for (i=0; i<maxSpeed; i++) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(2);
  }

  delay(timeDelay);

  for (i=maxSpeed; i!=0; i--) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(2);
  }
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}

void turnAround(int timeDelay) {
  uint8_t i;
  motorR.run(FORWARD);
  motorL.run(BACKWARD);
  for (i=0; i<maxSpeed; i++) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(10);
  }
  delay(timeDelay);
  for (i=maxSpeed; i!=0; i--) {
    motorR.setSpeed(i);
    motorL.setSpeed(i);
    delay(10);
  }
  motorR.run(RELEASE);
  motorL.run(RELEASE);
}


void loop() {

}
