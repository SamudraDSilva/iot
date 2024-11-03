#define trig 2
#define echo 4

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

// int led = 6;
int delayTime = 800;


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




void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
//  pinMode(led, OUTPUT);
  
  Serial.begin(9600);


  // initialize the LCD
  lcd.begin();

  lcd.createChar(0, Heart);
  lcd.createChar(6, Skull);
  lcd.createChar(7, Lock);
  

  // Turn on the blacklight and print a message.
  lcd.backlight();
  lcd.setCursor(3,1);
  lcd.write(0);
  lcd.print(" by Deshan ");
  lcd.write(0);
  delay(2000);

 lcd.setCursor(0,0);
  lcd.print("Distance: ");
// lcd.autoscroll();
  
}

void loop(){

  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  long time= pulseIn(echo,HIGH);

  long inches = time / 74 / 2;
  long cm = time / 29 / 2;
  long m = cm/100;

  Serial.print(inches);
  Serial.print("in \t");

  Serial.print(cm);
  Serial.println("cm");
  
  lcd.setCursor(10,0);


  if(cm <10){
    lcd.print(cm);
    lcd.print("cm");
   
    lcd.setCursor(13,0);
    lcd.print(" ");
      if (cm<=5){
      lcd.setCursor(3,1);
      lcd.write(6);
      lcd.print(" too close!");
    }
     delay(delayTime);

     
 
    
    
  }
  else if(cm < 100){
    lcd.print(cm);
    lcd.print("cm");
    delay(delayTime);
  
  }
  else{
    lcd.print(m);
    lcd.print("m");

    if(m <10){
    lcd.setCursor(12,0);
    lcd.print("  ");
     delay(delayTime);
    }
    lcd.setCursor(13,0);
    lcd.print("  ");
    
      if (m==12){
      lcd.setCursor(0,1);
      lcd.print("or out of range");
      
      
      lcd.write(7);
      delay(delayTime);
    }

  // cuz this is  always under 12m.
  }
  clearLCDLine(1);

}

void clearLCDLine(int line){               
        lcd.setCursor(0,line);
        for(int n = 0; n < 20; n++) // 20 indicates symbols in line. For 2x16 LCD write - 16
        {
                lcd.print(" ");
        }
}
