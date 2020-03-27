const int analogPin = A2;

int l1 = 9;
int l2 = 10;
int l3 = 11;
int l4 = 12;


void setup() {
  pinMode(analogPin, INPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  int val = analogRead(analogPin);
  Serial.println(val);

  if (val < 10) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  }
  if (val >= 10 && val <= 120) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  }
  if (val >= 121 && val <= 230) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
  }
  if (val >= 231 && val <= 340) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
  }
  if (val >= 341) {
    digitalWrite(l1, HIGH);
    digitalWrite(l2, HIGH);
    digitalWrite(l3, HIGH);
    digitalWrite(l4, HIGH);
  }

}
