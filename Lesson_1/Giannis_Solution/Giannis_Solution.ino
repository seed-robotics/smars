#include <AFMotor.h>

AF_DCMotor motorR(1,MOTOR12_8KHZ);
AF_DCMotor motorL(3,MOTOR34_8KHZ);

char command;

void setup() {

Serial.begin(9600);
motorR.setSpeed(70);
motorL.setSpeed(150);


}
void loop() {
  
if(Serial.available()>0){
  
  command = Serial.read();
  
  Serial.print("command: ");
  Serial.println(command);

  
  if(command == 'w'){
    forward();
  }

  if(command == 's'){
    backward();
  }

  if(command == 'a'){
    left();
  }

  if(command == 'd'){
    right();
  }
}


}
