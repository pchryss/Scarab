// Motor A pins
const int IN1 = 4;
const int IN2 = 7;
const int ENA = 5;

// Motor B pins
const int IN3 = 2;
const int IN4 = 6;
const int ENB = 3;

void setup() {
  // Set motor pins as output
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
  stopMotors();
}

void loop() {
  if (Serial.available() > 0) {
    char c = Serial.read();
    Serial.print("Command: ");
    Serial.print(c);

    switch (c) {
      case 'F':
        forward();
        break;
      case 'B':
        backward();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
      case 'S':
        stopMotors();
        break;
      default:
        Serial.println("Unknown command.");
        stopMotors();
        break;
    }
  }
}

// Motor control functions
void forward() {
  Serial.println(" Forward");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(ENB, HIGH);
}

void backward() {
  Serial.println(" Backward");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(ENA, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(ENB, HIGH);
}

void left() {
  Serial.println(" Left");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(ENA, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  digitalWrite(ENB, HIGH);
}

void right() {
  Serial.println(" Right");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(ENA, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  digitalWrite(ENB, HIGH);
}

void stopMotors() {
  Serial.println(" Stop");
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
}