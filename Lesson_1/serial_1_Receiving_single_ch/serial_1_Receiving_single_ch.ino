char  receivedChar;
boolean newData = *****;


void setup() {
  Serial.****(9600);
  Serial.println("Arduino is ready");
}

void loop() {
******
******
}

void rcvOneChar(){
  if (Serial.available()>0){
    receivedChar = Serial.read();
    newData = true;
  }
}

void printOneChar(){
  if (newData==*****){
    Serial.print("New Data = ");
    Serial.println(receivedChar);
    newData = false;
  }
}
