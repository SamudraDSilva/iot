int time = 50;
int plus =500;

void setup() {
  for(int i=1; i<=12;i++){
    pinMode(i, OUTPUT);
  }

}

void loop() {
  int count = 1;
  while (count <=2){
          for(int i=1; i<=12; i++){
                digitalWrite(i, HIGH);
                  delay(time);
                digitalWrite(i, LOW);
                  delay(time-10);
              }
          
          for(int i=13; i>=1; i--){
                digitalWrite(i, HIGH);
                  delay(time);
                digitalWrite(i, LOW);
                  delay(time-10);
          
                  
              }

            while(count<=2){
              int q=12 ;
              for (int i=1; i<=6; i++){
                digitalWrite(i, HIGH);
                digitalWrite(q, HIGH);
                delay(time);
            
                digitalWrite(i, LOW);
                digitalWrite(q, LOW);
                delay(time);
                
                q=q-1;
              }
              q=7;  
              for (int i=6; i>=1; i--){
                digitalWrite(i, HIGH);
                digitalWrite(q, HIGH);
                delay(time);
            
                digitalWrite(i, LOW);
                digitalWrite(q, LOW);
                delay(time);
                
                q=q+1;
              }
            
              count= count+1;
              
            }
            
            for(int i=1;i<=12;i++){
              digitalWrite(i, HIGH);
              delay(time); 
              
            }
            
              for(int i=12;i>=1;i--){
              digitalWrite(i, LOW);
              delay(time); 
              
            }
            for(int i=12;i>=1;i--){
              digitalWrite(i, HIGH);
              delay(time); 
              
            }
            
              for(int i=1;i<=12;i++){
              digitalWrite(i, LOW);
              delay(time); 
              
              
            }

      count = count +1;
     }

   for(int i=1; i<=12; i++){
    if(i%2 != 0){
      digitalWrite(i, HIGH);
      delay(plus);
      }
   else{   
    continue;
    }
    
   }

   for(int i =1; i<=12; i++){
    digitalWrite(i, LOW);
   }


   for(int i=12; i>=0; i--){
    if(i%2 == 0){
      digitalWrite(i, HIGH);
      delay(plus);
      }
   else{   
    continue;
    }
    
   }

   for(int i =1; i<=12; i++){
    digitalWrite(i, LOW);
   } 
 

}









    
