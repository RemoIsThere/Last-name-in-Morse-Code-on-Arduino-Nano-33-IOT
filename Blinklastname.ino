   /*
  Name- Rehmat
  In this task, we wrote our last name in morse code.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // P
      alphaP();
  
//  a
   alphaA();
//  p
    alphaP();
//  n
    alphaN();
//  e
    alphaE();
//  j
    alphaJ();
//  a
    alphaA();
}

void dot(){
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);  
  }
void dash(){
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  }

  
//alphabets
void alphaA(){
  dot();
   dash();
   digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaB(){
  dash();
  dot();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaC(){
  dash();
  dot();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaD(){
  dash();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaE(){
    dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaF(){
  dot();
  dot();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaG(){
  dash();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaH(){
  dot();
  dot();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaI(){
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaJ(){
    dot();
  dash();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaK(){
  dash();
  dot();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaL(){
  dash();
  dot();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaM(){
  dash();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaN(){
    dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaO(){
  dash();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaP(){
    dot();
  dash();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaQ(){
  dash();
  dash();
  dot();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaR(){
  dot();
  dash();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaS(){
  dot();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaT(){
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaU(){
  dot();
  dot();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaV(){
  dot();
  dot();
  dot();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaW()
  dot();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaX(){
  dash();
  dot();
  dot();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaY(){
  dash();
  dot();
  dash();
  dash();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
void alphaZ(){
  dash();
  dash();
  dot();
  dot();
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(2000);
}
