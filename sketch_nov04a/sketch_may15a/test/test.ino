int firstPin = 1;
int lastPin = 12;
int countPolice = 2;
int time[] = {50 ,100, 200, 300, 500, 600};
String name="";
int pw = 1234;
//int effect;
int inputPw;


void setup() {
  Serial.begin(9600);
  for(int i = 1; i<=12; i++){
         pinMode(i, OUTPUT);
                 
   }

  auth();

 // Serial.print("Magic Number: ");
 // while(Serial.available() == 0){}//wait
 // effect = Serial.parseInt();
 // Serial.println(effect);
}

void loop() {
  
  int countDown = time[random(0,6)];
  //int countDown = time[effect];
  Serial.print("mSecondes: ");
  Serial.println( countDown);
  effPolice(countDown);

}
//authentication

int auth(){
  Serial.println("Enter your name: ");
  while(Serial.available() == 0){} //wait
  name = Serial.readString();
  Serial.println("Hello, " + name);

  Serial.println("Password: ");
  while(Serial.available() == 0){} //wait
  inputPw = Serial.parseInt();

  while(inputPw != pw){
  Serial.println("**try again**");
  while(Serial.available()== 0){} //wait
  inputPw = Serial.parseInt();
  }
  
  
}

// effect police

int effPolice(int cDown){
      for(int i= 1; i<=countPolice; i++){
              
              for (int i=0; i<=5; i++){
                  help4effPolice(i,cDown);
              }
              
              for (int i=5; i>=0; i--){
                help4effPolice(i,cDown);            
              
              }    
        }
        
  }

// less code for eff_Police

 int help4effPolice(int i,int cDown){
                digitalWrite(firstPin+i, HIGH);
                digitalWrite(lastPin-i, HIGH);
                delay(cDown);
            
                digitalWrite(firstPin+i, LOW);
                digitalWrite(lastPin-i, LOW);
                delay(cDown);
 }
