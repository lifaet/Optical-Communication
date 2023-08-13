//receiver
#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  pinMode(8, INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME    ");
  delay(500);
  lcd.clear();
}

void loop() {
  unsigned long duration = pulseIn(8, HIGH);
  if (duration) {
    Serial.println(duration);
  }
  if (duration > 9800 && duration < 15000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received:0");
  }
  else if (duration > 18000 && duration < 25000)
  {
    lcd.setCursor(0, 0);
    lcd.print("Received:1");
  }
}
