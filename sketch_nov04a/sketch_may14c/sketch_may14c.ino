int pinArray[] = {1,2,3,4,5};
int count;
int timer = 500;

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

 void loop(){
  for (count=0; count<5; count++){
    digitalWrite(pinArray[count], HIGH);
    delay(timer); 
    digitalWrite(pinArray[count + 1], HIGH);
    delay(timer); 
    digitalWrite(pinArray[count], LOW); 
    delay(timer*2); 
  }

  for (count=5; count<0; count--){
    digitalWrite(pinArray[count], HIGH);
    delay(timer); 
    digitalWrite(pinArray[count - 1], HIGH);
    delay(timer); 
    digitalWrite(pinArray[count], LOW); 
    delay(timer*2); 
  }
  
}
