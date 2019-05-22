#include <dht.h>

int Pin = 8;
dht Ob;

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
 Ob.read11(Pin);
delay(2000);
Serial.print("Humidity: ");
Serial.println(Ob.humidity);

 Serial.print("Temp: ");
 Serial.println(Ob.temperature);
}
