int led[4] = { 17, 2, 15, 12 };

void setup() {
  Serial.begin(115200);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
}

void loop() {
  digitalWrite(17, LOW);  //ติด
  delay(5);
  digitalWrite(17, HIGH);  //ติด
  delay(5);
  digitalWrite(2, LOW);  //ติด
  delay(5);
  digitalWrite(2, HIGH);  //ติด
  delay(5);
  digitalWrite(15, LOW);  //ติด
  delay(5);
  digitalWrite(15, HIGH);  //ติด
  delay(5);
  digitalWrite(12, LOW);  //ติด
  delay(5);
  digitalWrite(12, HIGH);  //ติด
  delay(5);
}