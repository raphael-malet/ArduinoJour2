#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int progress = 0;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  progress = progress + 5; 
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Progression:");

  int barLength = 16;
  int progressChars = progress * barLength / 100; 

  lcd.setCursor(0, 1);
  for (int i = 0; i < barLength; i++) {
    if (i < progressChars) {
      lcd.write(255);
    } else {
      lcd.write(' ');
    }
  }

  delay(3000); 
}