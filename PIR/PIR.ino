int led = 5;
int sensor = 6;

int state = LOW;

int val = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {

  val = digitalRead(sensor);
  if (val == HIGH) {
    digitalWrite(led, HIGH);
    delay(350);
    if (state == LOW) {
      Serial.println("Motion Ache");
      state = HIGH;
    }

  }
  if(val==LOW) {
    digitalWrite(led, LOW);
    delay(500);
    if (state == HIGH) {
      Serial.println("Motion Nai");
      state = LOW;
    }
  }
}
