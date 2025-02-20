#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16 , 2);


byte Heart[] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000,
  B00000
};
byte Bell[] = {
  B00100,
  B01110,
  B01110,
  B01110,
  B11111,
  B00000,
  B00100,
  B00000
};
byte Alien[] = {
  B11111,
  B10101,
  B11111,
  B11111,
  B01110,
  B01010,
  B11011,
  B00000
};
byte Check[] = {
  B00000,
  B00001,
  B00011,
  B10110,
  B11100,
  B01000,
  B00000,
  B00000
};
byte Speaker[] = {
  B00001,
  B00011,
  B01111,
  B01111,
  B01111,
  B00011,
  B00001,
  B00000
};
byte Sound[] = {
  B00001,
  B00011,
  B00101,
  B01001,
  B01001,
  B01011,
  B11011,
  B11000
};
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
byte Lock[] = {
  B01110,
  B10001,
  B10001,
  B11111,
  B11011,
  B11011,
  B11111,
  B00000
};
void setup() {
  // Initialize LCD and turn on the backlight:
  lcd.begin();
  lcd.backlight();
  // Create new characters:
  lcd.createChar(0, Heart);
  lcd.createChar(1, Bell);
  lcd.createChar(2, Alien);
  lcd.createChar(3, Check);
  lcd.createChar(4, Speaker);
  lcd.createChar(5, Sound);
  lcd.createChar(6, Skull);
  lcd.createChar(7, Lock);
  // Clear the LCD screen:
  lcd.clear();
  // Print a message to the lcd:
  lcd.print("Custom Character");
}
// Print all the custom characters:
void loop() {
  lcd.setCursor(0, 1);
  lcd.write(0);
  lcd.setCursor(2, 1);
  lcd.write(1);
  lcd.setCursor(4, 1);
  lcd.write(2);
  lcd.setCursor(6, 1);
  lcd.write(3);
  lcd.setCursor(8, 1);
  lcd.write(4);
  lcd.setCursor(10, 1);
  lcd.write(5);
  lcd.setCursor(12, 1);
  lcd.write(6);
  lcd.setCursor(14, 1);
  lcd.write(7);

}
