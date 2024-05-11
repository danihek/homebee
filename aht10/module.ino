#include <Wire.h>
#include <AHT10.h>

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  if (!AHT10.begin(eAHT10Address_Low))
  {
    Serial.println("AHT10 failed to begin!");
    while (1)
    {
      delay(1000);
    }
  }
}



void loop()
{
  for (;;)
  {
    Serial.println("Humidity: "+AHT10.GetHumidity()+"%");
    Serial.println("Temperature: "+AHT10.GetTemperature()"°C");

    delay(1000);
  }
}
