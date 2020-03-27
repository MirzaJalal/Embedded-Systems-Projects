const int led = 13;
const int soundpin = A3;
const int threshold = 300;
void setup() {
  Serial.begin(9600);
  pinMode(soundpin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int sensor = analogRead(soundpin);

  if (sensor >= threshold) {
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("Detecting Sound");
  }
}
