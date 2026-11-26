const int LDR_PIN = 34;    
int ldrValues[10];

void setup() {
  Serial.begin(115200);

 
  for (int i = 0; i < 10; i++) {
    ldrValues[i] = analogRead(LDR_PIN);
    Serial.print("ครั้งที่ ");
    Serial.print(i + 1);
    Serial.print(" : ");
    Serial.println(ldrValues[i]);
    delay(500);
  }

  // หาค่าสูงสุด ต่ำสุด และผลรวม
  int maxVal = ldrValues[0];
  int minVal = ldrValues[0];
  long sum = 0;

  for (int i = 0; i < 10; i++) {
    if (ldrValues[i] > maxVal) maxVal = ldrValues[i];
    if (ldrValues[i] < minVal) minVal = ldrValues[i];
    sum += ldrValues[i];
  }
  float average = (float)sum / 10;

  Serial.println("------ สรุปผล ------");
  Serial.print("ค่าสูงสุด = ");
  Serial.println(maxVal);
  Serial.print("ค่าต่ำสุด = ");
  Serial.println(minVal);
  Serial.print("ค่าเฉลี่ย = ");
  Serial.println(average, 2);
}

void loop() {}