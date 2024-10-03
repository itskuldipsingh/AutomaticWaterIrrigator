// Define the pin numbers
const int RelayPin = D1;  // Pin D1

// Define Variables
int RelayOffTime = 30;  // Off Time in seconds
int RelayOnTime = 5;    // On Time in seconds

void setup() {
  // Set pin mode
  pinMode(RelayPin, OUTPUT);
}

void loop() {
  // Set D1 low (Relay off)
  digitalWrite(RelayPin, LOW);
  delay(RelayOffTime * 1000);  // Convert to milliseconds

  // Set D1 high (Relay on)
  digitalWrite(RelayPin, HIGH);
  delay(RelayOnTime * 1000);   // Convert to milliseconds
}
