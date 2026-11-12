#define LED_PIN 17
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  int count = 1;

  while (count <= 5) {
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    Serial.println(count);
    count++;
  }
  count = 5;
  while (count >= 1) {
    Serial.println(count);
    count--;
  }
}

void loop() {
}
