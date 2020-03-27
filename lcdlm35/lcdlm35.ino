#include <LiquidCrystal.h>
#define tempPin A0
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
lcd.begin(16, 2); 
Serial.begin(9600);
Serial.print("Hello World");
}
void loop(){
  lcd.setCursor(0,0);
   float val = analogRead(tempPin);
  float mv = ( val/1024.0) * 5000;
  float cel = mv/10;
  float farh = (cel*9)/5+32;
  lcd.setCursor(0,0);
  lcd.print("Temperature DIU");
  lcd.setCursor(0,1);
  lcd.print(cel);
  lcd.print((char)223);
  lcd.print("C");
  lcd.setCursor(9,1);
  delay(1000);
 }
