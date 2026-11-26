int numbers[10] = {12, 45, 7, 89, 23, 56, 34, 78, 90, 15};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 10; i++) {
    Serial.println(numbers[i]);
  }
}

void loop() {
}