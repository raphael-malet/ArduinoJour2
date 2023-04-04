#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  int sensorValue = analogRead(A0); 
  float voltage = sensorValue * (5.0 / 1023.0); 
  lcd.setCursor(0, 0);
  lcd.print("Tension : ");
  lcd.print(voltage, 2); 
  lcd.print("V");
  delay(1000);
}