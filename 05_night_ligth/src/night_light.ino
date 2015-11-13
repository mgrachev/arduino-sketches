#define LED_PIN 13
#define LDR_PIN A0
#define POT_PIN A1

void setup()
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int lightness = analogRead(LDR_PIN);
  int threshold = analogRead(POT_PIN);

  boolean tooDark = (lightness < threshold);

  if (tooDark) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
