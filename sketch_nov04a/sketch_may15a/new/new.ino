int time = 100;
int blinkTime= 100;
int count= 3;
int firstPin = 1;
int lastPin = 12;
int countDouble = 3;
int countPolice = 3;




      void setup() {
                
                
                for(int i = 0; i<=12; i++){
                  pinMode(i, OUTPUT);
                  
                }
                
      
      }
      
      void loop() {
        
                effectAwesome();
            
      }  












int effectAwesome(){

  
            ledBlink(firstPin,blinkTime-200,count-1);
            ledSlideEff(time,00);
            ledBlink(lastPin,blinkTime-200,count-1);
            ledSlideEff(time,11);
          
            effDouble(time);
            
            allBlink(blinkTime-100,count);
          
            effPolice();
  
 
}




//BLINK

int ledBlink(int pin, int blinkTime,int count){

    for(int i = 1; i <= count; i++){
        digitalWrite(pin, HIGH);
        delay(blinkTime);
        digitalWrite(pin, LOW);
        delay(blinkTime);
      }
    
 }

 
//All blink
 int allBlink(int blinkTime,int count){

    for(int i=1; i<=count; i++){
          for(int i = 1; i <= 12; i++){
            digitalWrite(i, HIGH);
            
          }   
          delay(blinkTime);
          
          for(int i = 1; i <= 12; i++){
              digitalWrite(i, LOW);
              
          }
          delay(blinkTime);
    }
    
 }


// effect slide

void ledSlideEff(int time, int side){
  // 00-->  1========>12
  // 11-->  12=======>1

  
          if (side == 00){
            for(int i = 1; i<=12; i++){
                      digitalWrite(i, HIGH);
                      delay(time);
                      
                   }
            
                  for(int i = 12; i>=0; i--){
                    digitalWrite(i, LOW);
                    delay(time);
                  }
          }
          else if(side == 11){
            for(int i = 12; i>=0; i--){
                      digitalWrite(i, HIGH);
                      delay(time);
                      
                   }
            
                  for(int i = 1; i<=12; i++){
                    digitalWrite(i, LOW);
                    delay(time);
          }
      }
          else{
            // continue 
          }
          
}


//effect double slide

 int effDouble(int time){
      for(int i= 1; i<=countDouble; i++){
                  // 1 ======> 12
                    for(int i = 1; i <=12; i++){
                      digitalWrite(i, HIGH);
                      digitalWrite(i-1, HIGH);
                      delay(time);
          
                      digitalWrite(i, LOW);
                      digitalWrite(i-1, LOW);
                   }
                  
          
                  // 12 =====> 1
                    for(int i = 12; i >=1; i--){
                      digitalWrite(i, HIGH);
                      digitalWrite(i-1, HIGH);
                      delay(time);
          
                      digitalWrite(i, LOW);
                      digitalWrite(i-1, LOW);
                   }
        
      }

   
 }

// effect police

int effPolice(){
      for(int i= 1; i<=countPolice; i++){
              
              for (int i=0; i<=5; i++){
                  help4effPolice(i);
              }
              
              for (int i=5; i>=0; i--){
                help4effPolice(i);            
              
              }    
        }
        
  }

// less code for eff_Police

 int help4effPolice(int i){
                digitalWrite(firstPin+i, HIGH);
                digitalWrite(lastPin-i, HIGH);
                delay(time);
            
                digitalWrite(firstPin+i, LOW);
                digitalWrite(lastPin-i, LOW);
                delay(time);
 }
 





 
