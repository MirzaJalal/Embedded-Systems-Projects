#define LED 3


void setup() {
  pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {

  for (int i = 0; i <= 255; i++) {
    delay(10);
    analogWrite(LED, i);
    Serial.println(i);
    delay(10);

  }  delay(100);
int  i=0;
  for (int i = 255; i >= 0; i--) {
    delay(10);
    analogWrite(LED, i);
    Serial.println(i);
    delay(10);

  }
  delay(1000);
}
