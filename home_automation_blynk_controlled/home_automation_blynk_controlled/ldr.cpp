#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   pinMode(LDR_SENSOR  , INPUT);

   
}
void brightness_control(void)
{
  unsigned int adc_val;
  //TO READ VALUES FROM LDR SENSOR 0 to 1023
  adc_val = analogRead(LDR_SENSOR);

  //SCALE IT DOWN 0 TO 1023 AND REVERSE IT 255 TO 0
  adc_val = 255 - (adc_val/4);

  //or map(0,1023,255,0)

  //to control the garden lights
  analogWrite(GARDEN_LIGHT , adc_val);

  delay(100);
}
