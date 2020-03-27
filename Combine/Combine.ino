#include <Servo.h>
Servo servoMain;
const int led = 13;
const int trigPin = 7;
const int echoPin = 8;

int duration;
int distance;

void setup() {
  servoMain.attach(4);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration * (0.034 / 2));
  Serial.println(distance);
  if (distance <= 10) {
    digitalWrite(led, LOW);
    servoMain.write(45);  // Turn Servo Left to 45 degrees
    delay(1000);          // Wait 1 second
    servoMain.write(0);   // Turn Servo Left to 0 degrees
    delay(1000);          // Wait 1 second
    
  }
  if (distance >= 10)
  {
    digitalWrite(led, HIGH);
    delay(1000);
  }
}
