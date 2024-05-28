/* Summer Robotics Camp Code module 1a "Blink"
    Written by Michael Caiozzo 
*/
// Variable Declarations

int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  
}

void loop() {
  digitalWrite(led, HIGH);  // Turn led on
  delay(500);               // delay 500 miliseconds(1/2 second)
  digitalWrite(led, LOW);   // Turn led off 
  delay(500);               // delay 500 miliseconds(1/2 second)
}
