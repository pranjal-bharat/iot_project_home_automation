
#define BLYNK_TEMPLATE_ID      "TMPL3l8GxsRar"
#define BLYNK_TEMPLATE_NAME    "Home automation"
#define BLYNK_AUTH_TOKEN       "esI9eY7OQUjxyC-WmzOCAHyJ_o9_rfgv"     //to connect arduino device to app

#include<SPI.h>                //to connect to arduino board
#include<Ethernet.h>             //to connect to ethernet
#include<BlynkSimpleEthernet.h>      //to connect to blynk cloud



#define LED    2            //CONNECT LED TO PIN 2 

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  if(value)
  {
    digitalWrite(LED,1);
  }
  else{
     digitalWrite(LED,0);
  }
}



void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN );   //to connect arduino to blynk cloud 
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();        //connecting board to cloud
}
