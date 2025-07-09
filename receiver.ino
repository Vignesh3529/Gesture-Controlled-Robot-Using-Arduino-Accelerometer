int rxPin = 12;
int motor1 = 3;
int motor2 = 4;

void setup() {
  Serial.begin(9600);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == 'F') {
      // Move forward
    } else if (cmd == 'B') {
      // Move backward
    } else if (cmd == 'L') {
      // Turn left
    } else if (cmd == 'R') {
      // Turn right
    } else {
      // Stop
    }
  }
}
