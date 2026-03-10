// Ultrasonic Sensor pins
#define trigPin D5   // GPIO14
#define echoPin D6   // GPIO12

// Buzzer & LED pins
#define buzzerPin D7 // GPIO13
#define ledPin D8    // GPIO15

long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // --- Measure Distance ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH, 30000); // 30ms timeout (~5m)
  distance = (duration * 0.0343) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // --- Buzzer + LED Control ---
  if (distance > 0 && distance <= 20) {
    // Very close → continuous buzzer & LED ON
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(100);
  }
  else if (distance > 20 && distance <= 50) {
     // Medium range → fast beeps
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);
    delay(200);

  }
}


