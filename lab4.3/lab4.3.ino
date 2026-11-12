#define LED_PIN 17
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  int count = 1;
  do {
    Serial.println(count);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);

    
    count++;
  } while (count <= 5);
}

void loop() {
}
