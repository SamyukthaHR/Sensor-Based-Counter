/*The circuit:
   LCD RS pin to digital pin 12
   LCD Enable pin to digital pin 11
   LCD D4 pin to digital pin 5
   LCD D5 pin to digital pin 4
   LCD D6 pin to digital pin 3
   LCD D7 pin to digital pin 2
   LCD R/W pin to ground
   LCD VSS pin to ground
   LCD VCC pin to 5V
   IR sensors to 7,8 pins
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensorOne = 7;
int sensorStateOne = 0;
int in = 0;

void setup()
{
  pinMode(sensorOne, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop()
{
  // read the state of the pushbutton value:
  sensorStateOne = digitalRead(sensorOne);
  if (sensorStateOne == LOW)
  {
    in++;
    lcd.setCursor(0, 0);
    lcd.print("IN ");
    lcd.print(in);
    delay(1000);
+++  }
}

