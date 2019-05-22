const int trigPin = 8;
const int echoPin = 9;
long duration;
float distance;

void setup() 
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  }

void loop()
{ 
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
  
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
  
    digitalWrite(trigPin, LOW); 
    duration = pulseIn(echoPin, HIGH); 
  
  // Calculating distance
  distance= duration*0.0343/2; 
  Serial.print("Distance = ");
  Serial.print(distance); 
  Serial.println(" cm");
 

delay(1000);
}
