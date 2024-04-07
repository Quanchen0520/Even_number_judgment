void setup() {
  Serial.begin(115200);
}

void loop() {
  int number = Serial.parseInt();
  if (number != 0) {
    Serial.print(number);
    if (number % 2 == 0) {
      Serial.println("是偶數");
    } else {
      Serial.println("是奇數");
    }
  }
}