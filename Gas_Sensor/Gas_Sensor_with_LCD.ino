#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensor = A0;
void setup() {
  lcd.begin(20, 4);
  lcd.print("GAS MONITORING");
  lcd.setCursor(0,1);
  lcd.print("SYSTEM");
  lcd.setCursor(0, 2);
  lcd.print("By Elisee");
  pinMode(sensor, INPUT);
  delay(3000);
}

void loop() {
  lcd.clear();
  float sensor_value = analogRead(sensor);
  lcd.print("GAS MONITORING");
  lcd.setCursor(0, 2);
  lcd.print("Gas: ");
  lcd.print(sensor_value);

  delay(1000);
  lcd.clear();
}
