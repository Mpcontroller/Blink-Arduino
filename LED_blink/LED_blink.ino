/*This project is for the beginners who crazy about embedded system 
 * This project created on 11/04/2023
 * Why we are choosing 13th pin?
 * Because 13 has inbuild resistor . So no need external resistor.
 * Comment me you are facing any dificulties during this project
 * Enquiry Mail ID : mohanprasathbme@gmail.com
 */
void setup() {
 pinMode(13,OUTPUT);//declaring digital pin 13 as output
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13,HIGH); // turn the LED on 
  delay(1000);           // wait for a second
  digitalWrite(13,LOW); // turn the LED off by making the voltage LOW
  delay(1000);           // 1000 Millisecond = 1 Second
}
