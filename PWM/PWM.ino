//WAP to test analog write function

#define LED   3
void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED , OUTPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:
  for(unsigned int duty_cycle = 0 ; duty_cycle < 255 ; duty_cycle++)
{
            analogWrite(LED , duty_cycle);
            delay(10);

}


}
