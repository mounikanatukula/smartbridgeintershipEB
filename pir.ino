void setup() {
    pinMode(5,OUTPUT);
pinMode(4,INPUT);
Serial.begin(115200);
}

void loop() {
  int a=digitalRead(4);
  Serial.println(a);
  if(a==HIGH)
  {
    Serial.println("PERSON DETECTED"); 
    digitalWrite(5,HIGH);  
    delay(100);
  }
  else
  {
  Serial.println("PERSON NOT DETECTED");
  digitalWrite(5,LOW);
  delay(100);
  }
}
