#include <Arduino.h>

// TP Validation Electronique — Ynov
// Modifie uniquement ce fichier

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("BOOT OK — pret");
}

void loop() {
  // TODO : écris ton code ici
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED ON");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED OFF");
  delay(1000);
}