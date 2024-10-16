char  receivedChar;
boolean newData = false;


void setup() {
  Serial.begin(9600);
  Serial.println("Arduino is ready");
}

void loop() {
rcvOneChar();
printOneChar();
}

void rcvOneChar(){
  if (Serial.available()>0){
    receivedChar = Serial.read();
    newData = true;
  }
}

void printOneChar(){
  if (newData){
    Serial.print("New Data = ");
    Serial.println(receivedChar);
    newData = false;
  }
}
