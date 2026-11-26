int scores[10] = {45, 78, 50, 32, 66, 49, 90, 55, 38, 81};

void setup() {
  Serial.begin(115200);
  for (int i = 0; i < 10; i++) {
    Serial.print("นักเรียนคนที่ ");
    Serial.print(i + 1);
    Serial.print(" คะแนน ");
    Serial.print(scores[i]);
    if (scores[i] >= 50) {
      Serial.println(" : ผ่าน");
    } else {
      Serial.println(" : ไม่ผ่าน");
    }
  }
}

void loop() {}