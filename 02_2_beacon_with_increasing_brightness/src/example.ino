#define LED_PIN_1 11
#define LED_PIN_2 3

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 5; i++) {
    int value = i * 51;
    analogWrite(LED_PIN_1, value);
    delay(200);
  }
  analogWrite(LED_PIN_1, 0);

  for (int i = 0; i <= 5; i++) {
    int value = i * 51;
    analogWrite(LED_PIN_2, value);
    delay(200);
  }
  analogWrite(LED_PIN_2, 0);
}
