#include "LiquidCrystal.h"
int rs = 12;
int en = 11;
int d4 = 5;
int d5 = 4;
int d6 = 3;
int d7 = 2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

byte Skull[] = {
  B00000,
  B01110,
  B10101,
  B11011,
  B01110,
  B01110,
  B00000,
  B00000
};

void setup() {
  lcd.begin(16,2);
  lcd.createChar(3, Skull);
}
 
void loop() {
  lcd.setCursor(0,1);
  lcd.write(byte(3));

}