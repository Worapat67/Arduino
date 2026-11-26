int scores[5] = {78, 85, 62, 90, 71};

void setup() {
  Serial.begin(115200);
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += scores[i];
  }
  float average = (float)sum / 5;

  Serial.print("คะแนนรวม = ");
  Serial.println(sum);
  Serial.print("ค่าเฉลี่ย = ");
  Serial.println(average, 2);
}

void loop() {}