// Turn on LED while the button is pressed

 const int LED = 13; // the pin for the LED
 const int BUTTON = 7; // the input pin where the 
                       // pushbutton is connected
 int val = 0;         // val will be used to stored the state of the input button
 

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON);

  if (val == HIGH) {
      digitalWrite(LED, HIGH);
    } else {
      digitalWrite(LED, LOW);
    }
  }
