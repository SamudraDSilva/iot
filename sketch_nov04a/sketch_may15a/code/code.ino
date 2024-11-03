void setup() {
  Serial.begin(9600);
  Serial.println("hi");
  
}

void loop() {
  Serial.println(random(10, 15));
  delay(500);

}
