#define LED_PIN_1 9
#define LED_PIN_2 5
#define POT_PIN   A0

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

void loop() {
  int rotation, brightness;

  rotation = analogRead(POT_PIN);
  brightness = rotation / 4;
  analogWrite(LED_PIN_1, brightness);

  int brightness_lower = brightness / 8;
  analogWrite(LED_PIN_2, brightness_lower);
}
