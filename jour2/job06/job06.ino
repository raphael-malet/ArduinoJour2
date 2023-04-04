#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
unsigned long lastTime = 0;
int seconds = 11;
int minutes = 54;
int hours = 14;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  unsigned long currentTime = millis();
  if (currentTime - lastTime >= 1000) { // une seconde est passée
    lastTime = currentTime;
    seconds++;
    if (seconds == 60) {
      seconds = 0;
      minutes++;
      if (minutes == 60) {
        minutes = 0;
        hours++;
        if (hours == 24) {
          hours = 0;
        }
      }
    }
  }

  lcd.setCursor(0, 0);
  if (hours < 10) {
    lcd.print("0");
  }
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0");
  }
  lcd.print(minutes);
  lcd.print(":");
  if (seconds < 10) {
    lcd.print("0");
  }
  lcd.print(seconds);

  delay(100); // ajuster la fréquence d'actualisation de l'affichage en fonction de vos besoins
}