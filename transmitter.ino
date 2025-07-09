int xPin = A0;
int yPin = A1;
int txPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(txPin, OUTPUT);
}

void loop() {
  int xVal = analogRead(xPin);
  int yVal = analogRead(yPin);
  char command;

  if (xVal > 600) command = 'F'; // Forward
  else if (xVal < 400) command = 'B'; // Backward
  else if (yVal > 600) command = 'L'; // Left
  else if (yVal < 400) command = 'R'; // Right
  else command = 'S'; // Stop

  Serial.write(command);  // For testing
  digitalWrite(txPin, command); // Send via RF (if using digital method)
  delay(100);
}
