#include <Arduino.h>
#define LED 13

int contador = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100),
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.println(contador++);
}
