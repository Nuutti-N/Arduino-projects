const int buttonPin = 2;   // button's top-leg wire goes to pin 2
const int ledPin = 13;     // the onboard "L" LED
unsigned long startTime; 

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // read the button; pin rests HIGH until pressed
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);         // control the LED
}


void loop() {
  digitalWrite(ledPin, LOW);
  delay(random(1000, 5000));

  digitalWrite(ledPin, HIGH);
  startTime = millis();
  while (digitalRead(buttonPin)==HIGH) {

}
  unsigned long reaction = millis() - startTime; 
  Serial.print("Your time: ");
  Serial.print(reaction);
  Serial.println(" ms");

  delay(2000);
}
