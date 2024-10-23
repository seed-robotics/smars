unsigned long echoTime ;
int trigPin =A1;
int echoPin = A0;
float Space = 0.0;

void setup() {
 Serial.begin(9600);
 pinMode(echoPin, INPUT);
 pinMode(trigPin, OUTPUT); 
}

void loop() {
 
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  echoTime = pulseIn(echoPin, HIGH);
  Space = (echoTime*0.034)/2;
  Serial.println(Space);
}
