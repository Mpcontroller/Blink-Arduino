/*This project is for the beginners who crazy about embedded system 
 * This project created on 11/04/2023
 * Comment me you are facing any dificulties during this project
 * Enquiry Mail ID : mohanprasathbme@gmail.com
 */
int a= LED_BUILTIN;
void setup() {
  pinMode(a, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(a,1);   // turn the LED on (1 is the voltage level)1==HIGH
  delay(1000);                       // wait for a second
  digitalWrite(a, 0);    // turn the LED off by making the voltage LOW
  delay(1000);                       // 1000 Millisecond = 1 Second
}
