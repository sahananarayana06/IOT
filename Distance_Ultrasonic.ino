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
