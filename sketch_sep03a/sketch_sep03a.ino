// code uning ultrasonic mantral dc motor Project. 15 by worapat m.2/4 no.31
int buzzerworapat = 2; int greenworapat = 3; int redworapat = 4;
const int trigworapat = 5; const int echoworapat = 6; 
long durationworapat; int distanceworapat;
int motor1worapat = 10; int motor2worapat = 12; 
boolean detectiveworapat = false; int countingworapat = 0; int speedpinworapat = 13; 
void setup() { 
Serial.begin(9600); 
pinMode (buzzerworapat, OUTPUT); pinMode (greenworapat, OUTPUT); pinMode (redworapat, OUTPUT); 
pinMode (trigworapat, OUTPUT); pinMode (echoworapat, INPUT); 
pinMode (motor1worapat, OUTPUT); pinMode(motor2worapat, OUTPUT);
pinMode (speedpinworapat, OUTPUT);
}
void loop() { 
digitalWrite(trigworapat, LOW); delayMicroseconds (2);
digitalWrite(trigworapat, HIGH); delayMicroseconds (10);
digitalWrite(trigworapat, LOW);
durationworapat = pulseIn (echoworapat, HIGH); 
distanceworapat = durationworapat *0.034 / 2; 
Serial.print("distance"); Serial.println(distanceworapat); delay(100);
if (distanceworapat <= 20) {
delay(100); 
if (detectiveworapat == false) {
detectiveworapat = true; 
countingworapat = countingworapat + 1; 
Serial.print("countingworapat "); Serial.println (countingworapat); delay(100); 
  } 
if (countingworapat == 1) { 
forwardworapat();
digitalWrite(greenworapat, HIGH); tone (buzzerworapat, 500, 100); delay(100);
digitalWrite(greenworapat, LOW); delay(100);
 }
if (countingworapat == 2) ; 
backwardworapat(); 
digitalWrite(redworapat, HIGH); tone (buzzerworapat, 500, 100); delay(100); 
digitalWrite(redworapat, LOW); delay(100);
}
if (countingworapat 3) {
countingworapat = 1;
}
} else { 
detectiveworapat = false; stopmotorworapat(); 
}
}
void forwardworapat() { 
analogWrite (speedpinworapat, 100); 
digitalWrite(motorlworapat, HIGH); digitalWrite(motor2worapat, LOW); 
}
void backwardworapat() { 
analogWrite (speedpinworapat, 100); 
digitalWrite(motoriworapat, LOW); digitalWrite(motor2worapat, HIGH); 
}
void stopmotorworapat() {
digitalWrite(motorlworapat, LOW); digitalWrite(motor2worapat, LOW);
}
