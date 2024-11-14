/*WAP to toggle LED*/

#define LED  2
void setup()
{
  //config pin 2 as output pin
  pinMode(LED , OUTPUT)  ;


}

void loop()
{
  //TURN ON LED'
  digitalWrite(LED,HIGH);
  delay(1000);
  digitalWrite(LED,LOW);
  delay(1000);                       //1 sec=1000ms 

}
