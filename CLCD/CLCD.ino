/*WAP to print temperature from temperature sensor on clcd*/

/*to clcd along i2c*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define TEMP     A0

//create obj called lcd of class LiquidCrystal_I2C
LiquidCrystal_I2C lcd( 0x27 , 16 , 2);

void setup()
{

  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.home();

  lcd.setCursor(0,0);
  lcd.print("Temperature");
  
}

float temperature;
String temp;


void loop() 
{
  //read analog value from A0 pin (0 to 1023) * 4.9mv/10mv
        temperature = (((analogRead(TEMP) * (float) 5/1024)) / (float) 0.01);
        
        temp = String(temperature, 2);   //float to string and reading ony 2 fields after decimal
        lcd.setCursor(0,1);
        lcd.print(temp);
  

}
