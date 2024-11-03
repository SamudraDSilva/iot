#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16 , 2);


// Make custom characters:
byte Heart[] = {
  B00001,
  B00011,
  B00101,
  B01001,
  B01001,
  B01011,
  B11011,
  B11000
};

void setup() {
  lcd.begin();
  // Create a new characters:
  lcd.createChar(0, Heart);

    
}

void loop() {
  // Print all the custom characters:
  lcd.setCursor(5, 1);
  lcd.write(byte(0));

}
