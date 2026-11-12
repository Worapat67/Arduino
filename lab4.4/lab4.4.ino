#define LED_PIN 17
void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  for (int count = 1; count <= 10; count++) {
    if (count == 5) {
      break;
    }
    Serial.println(count);
    digitalWrite(LED_PIN, LOW);
    delay(200);
    digitalWrite(LED_PIN, HIGH);
    delay(200);
  }

  for (int count = 10; count >= 1; count--) {
    if (count == 7) {
      continue;
    }
    digitalWrite(LED_PIN, LOW);
    delay(200);
    digitalWrite(LED_PIN, HIGH);
    delay(200);
    Serial.println(count);
  }
}

void loop() {
}
