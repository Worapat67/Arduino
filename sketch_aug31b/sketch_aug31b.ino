//c++ code Keypassword 4x4 worapat No.32 M.2/4
#include <Servo.h>
Servo worapatservo;
#include <LiquidCrystal_I2C.h>
#include <Key.h>
#include <Keypad>
char nameKeys [4] [4] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'}
 };
byte worapatrowPins [4] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte worapatcolPins [4] = {5, 4, 3, 2}; //connect to the column pinouts of the keypad
Keypad worapatKeypad = Keypad( makeKeymap(worapatKeys), worapatrowPins, worapatcolPins, 4, 4);
char worapatpressed; byte namekeycount = 0;
char worapatcode [7]; char namepassword [7] = "123ABC";
 
   void setup() {
 worapatservo.attach(10);worapatservo.write(0);delay(1000);
 worapatlcd.init();
 worapatlcd.backlight(); worapatlcd.setCursor(0, 0); worapatlcd.print("Enter password");
 }
 void loop() {
 if (worapatpressed)= worapatKeypad.getKey();
 worapatcode [worapatkeycount] worapatpressed;
 worapatlcd.setCursor (worapatkeycount+1, 1); worapatlcd.print(worapatpressed); worapatkeycount++; 1
 
; if (worapatkeycount = 6) {
   if (!strcmp(worapatcode, worapatpassword)){
 openworapatservo();
 }else{
 setup();

 }
 clearworapatcode();
 }
 void clearworapatcode () {
 while (worapatkeycount != 0) {
 worapatcode [worapatkeycount--]=0;
 }
 worapatlcd.clear();
 setup();
 }
   void openworapatservo() {   
 worapatservo.write(180); delay(2000);
   setup() ;