#include <Arduino.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

int tempPin = A0;
int umidPin = A1;
int ldrPin  = A2;

float temperatura = 0;
float umidade = 0;
int luminosidade = 0;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  temperatura = (analogRead(tempPin) / 1023.0) * 100.0;
  umidade = (analogRead(umidPin) / 1023.0) * 100.0;
  luminosidade = analogRead(ldrPin);

  // Serial mais enxuto
  Serial.print("T=");
  Serial.print(temperatura);
  Serial.print(" U=");
  Serial.print(umidade);
  Serial.print(" L=");
  Serial.println(luminosidade);

  // LCD mais rápido
  lcd.setCursor(0,0);
  lcd.print("T:");
  lcd.print(temperatura);
  lcd.print(" U:");
  lcd.print(umidade);

  lcd.setCursor(0,1);
  lcd.print("L:");
  lcd.print(luminosidade);

  delay(200); // atualização mais rápida
}
