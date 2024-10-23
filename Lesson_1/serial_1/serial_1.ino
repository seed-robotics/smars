if (Serial.available()>0){
    receivedChar = Serial.read();
    if (receivedChar  == "A")