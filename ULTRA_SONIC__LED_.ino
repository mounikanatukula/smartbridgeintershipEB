const int trigPin=4;
const int echoPin=5;
int led;
long duration;
int distance;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  
digitalWrite(trigPin,LOW);
  delayMicroseconds(2);  
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW); 
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.println("Distance:");
  Serial.println(distance);
  if(distance<7)
  {
   Serial.println("led on");
    digitalWrite(led,HIGH);
  }
  else
  {
    Serial.println("led off");
    digitalWrite(led,LOW);
  }  
}
