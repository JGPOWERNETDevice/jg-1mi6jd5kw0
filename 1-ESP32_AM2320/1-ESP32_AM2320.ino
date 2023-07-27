#include "DHTesp.h"
DHTesp dht;

int dht_pin = 27;

void setup()
{
  Serial.begin(9600);
  dht.setup(dht_pin, DHTesp::DHT22);
  
  delay(1000);
}

void loop()
{
  float temperature = dht.getTemperature();
  float humidity = dht.getHumidity();
  
  Serial.print("Temperature: ");
  Serial.println(temperature);
  Serial.print("Humidity: ");
  Serial.println(humidity);
  
  delay(2000);
}