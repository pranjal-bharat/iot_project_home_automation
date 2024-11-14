#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system(void)
{
    //configure pins for temp system
   pinMode( HEATER , OUTPUT );
   pinMode( COOLER , OUTPUT );
   pinMode( TEMPERATURE_SENSOR, INPUT );
    
}
//read temp from temp sensor and return the temp
float read_temperature(void)
{
  float temperature;
  temperature = (((analogRead(TEMPERATURE_SENSOR) * (float) 5/1024)) / (float) 0.01);
  return temperature;
  
}

//to turn on and off the cooler
void cooler_control(bool control)
{
  if(control)
  {
    digitalWrite(COOLER,  HIGH);
  }
  else
  {
    digitalWrite(COOLER , LOW);
  }
}
void heater_control(bool control)
{
    if(control)
  {
    digitalWrite(HEATER,  HIGH);
  }
  else
  {
    digitalWrite(HEATER , LOW);
  }
   
}
