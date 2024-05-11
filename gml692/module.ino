#include <HX711_ADC.h>
#include <EEPROM.h>

const int DOut = 3; 
const int CL = 2; 

HX711 weight(DOut,CL);

// TODO - set this value by using example calibrate sketch
float scale_fac = 0.f;

void setup()
{
  Serial.begin(9600);
  .set_scale(scale_fac);
  scale.tare();
}

void loop()
{
  Serial.print(scale.get_units(), 1);
  Serial.println();
}
