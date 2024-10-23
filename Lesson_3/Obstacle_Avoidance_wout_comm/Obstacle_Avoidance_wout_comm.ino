#include <AFMotor.h> 

AF_DCMotor MotorL(1); //
AF_DCMotor MotorR(2); //

const int trigPin = A0; //
const int echoPin = A1; //

long duration;
int distanceCm = 0;

void setup() {
  Serial.begin(115200); //
  Serial.println("SMARS Obstacle Avoidance Mod"); //
  
  pinMode(trigPin, OUTPUT); //
  pinMode(echoPin, INPUT); //
  
  //
  MotorL.setSpeed(255);
  MotorR.setSpeed(255);
  
  //
  MotorL.run(RELEASE);
  MotorR.run(RELEASE);
}

void loop() {
  distanceCm = getDistance(); //
  Serial.println(distanceCm); //
  
  //
  if (distanceCm <= 7) {
    MotorL.run(BACKWARD);
    MotorR.run(BACKWARD);
    delay(500);
    
    MotorL.run(FORWARD);
    MotorR.run(BACKWARD);
    delay(500);
  } 
  else {
    //
    MotorL.run(FORWARD);
    MotorR.run(FORWARD);
  }
}

int getDistance() {
  int echoTime; //
  int calculatedDistance; //

  //
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  echoTime = pulseIn(echoPin, HIGH); //
  
  //
  calculatedDistance = echoTime / 58.26;
  
  return calculatedDistance;
}
