#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Serial.printf("LED ENCENDIDA \n");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Serial.printf("LED APAGADA \n");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}