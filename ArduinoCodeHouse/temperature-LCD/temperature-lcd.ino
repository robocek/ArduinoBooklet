#include <LiquidCrystal.h>
const int TEMP = A0;
float celcius;

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("TEMP in celcius");
}

void loop() {
  celcius = analogRead(TEMP);
  celcius = celcius *5/1024;        //voltage felt
  celcius = celcius - 0.5;          //Subtract the offset
  celcius = celcius * 100;          //Convert to degrees
  lcd.setCursor(0, 1);
  lcd.print(celcius);
  delay(500);
}
