

void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  int time = 50;
   for(int i = 1; i<8; i++){
    digitalWrite(i, HIGH);
    delay(time);
    digitalWrite(i, LOW);
  }

  for(int q = 5; q > 1; q--){
    digitalWrite(q, HIGH);
    delay(time);
    digitalWrite(q, LOW);
  }
}
