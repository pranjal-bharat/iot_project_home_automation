//Program to test inlet & outlet valves

#define INLET_VALVE   0x00       
#define OUTLET_VALVE  0x01

#define ENABLE        0x01
#define DISABLE       0x00

void setup() 
{
  
  Serial.begin(9600);

}

void loop() 
{
  // inlet on
  Serial.write(INLET_VALVE);
  Serial.write(ENABLE);
  delay(5000);


  //inlet off
  Serial.write(INLET_VALVE);
  Serial.write(DISABLE);

 //outlet on
  Serial.write(OUTLET_VALVE);
  Serial.write(ENABLE);
  delay(3000);


//outlet off
  Serial.write(OUTLET_VALVE);
  Serial.write(DISABLE);

}
