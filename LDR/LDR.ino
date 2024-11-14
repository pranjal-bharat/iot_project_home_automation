//wap to  control brightness of LED using LDR

#define GARDEN_LIGHTS   3
#define LDR             A0

void setup()
{

  pinMode(GARDEN_LIGHTS , OUTPUT);
  pinMode(LDR , INPUT);

}


unsigned int adc_val;

void loop() 
{
  //TO READ VALUES FROM LDR SENSOR 0 to 1023
  adc_val = analogRead(LDR);

  //SCALE IT DOWN 0 TO 1023 AND REVERSE IT 255 TO 0
  adc_val = 255 - (adc_val/4);

  //or map(0,1023,255,0)

  //to control the garden lights
  analogWrite(GARDEN_LIGHTS , adc_val);
  delay(100);
}
