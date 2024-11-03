#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16 , 2);

int number = 0;
int count = 1;

// timers
int blinkTimer = 200;
int printDelay = 300;
// (***********)

void setup() {
  lcd.begin();
  
  lcd.setCursor(5,1);
  lcd.print("~by Deshan");
  delay(3000);
  
  
}

void loop() {
  lcd.leftToRight();
  
      while ( count <= 2){
              
                lcd.rightToLeft();
                lcd.setCursor(15,1);
                lcd.print("Numbers Backward");

                
              lcd.setCursor(3,0);    
              lcd.leftToRight();  
              
                   
                while(number <10){            
                  
                  cursorBlink();
                    lcd.print(number);
                    number ++;
                    delay(printDelay);
              
                  if(number == 10){
                    lcd.setCursor(0,1);
                    lcd.print("Numbers Backward");
                      
                    lcd.setCursor(12,0);
                    lcd.rightToLeft();
                    number = 0;
                    
                     while(number < 10){
                     
                      
                      
                       cursorBlink();
                        lcd.print(number);        
                        number  ++;
                        delay(printDelay);
                      }
                      break;
                  }
      
                }
    
            number = 0;
            count++;
      }

      lcd.clear();
      delay(2000);
      count = 1;
}


void cursorBlink(){
              for(int i= 0; i <= 1; i++ ){
                  lcd.cursor();
                  delay(blinkTimer);
                  lcd.noCursor();
                  delay(blinkTimer);
              }
                

}
