// C++ code
#include <LiquidCrystal.h>

int seconds = 0;

int appuie = 0;

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.
  pinMode(6, INPUT);

  // Print a message to the LCD.
  lcd_1.print("Lancer le chrono");
}

void loop()
{
  appuie = digitalRead(6);
  if (appuie == HIGH) {
    while (!(appuie == LOW)) {
      lcd_1.setCursor(0, 1);
    
      lcd_1.print(seconds);
      delay(1000); // 
      seconds += 1;
    }
  }
}