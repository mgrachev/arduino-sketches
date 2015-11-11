#define LED_PIN 9

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int x = 1;
  
  for (int i = 0; i > -1; i = i + x) {
    analogWrite(LED_PIN, i);
    if (i == 255) x = -1;
    delay(10);
  }
  
  delay(100);
}
