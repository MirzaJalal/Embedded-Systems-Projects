#define led 0
void setup() {

 pinMode(led,OUTPUT);

}

void loop() {
 digitalWrite(led,HIGH);
 delay(100);
}
