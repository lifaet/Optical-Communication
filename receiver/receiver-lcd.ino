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

  if (duration > 10000 && duration < 18000)
  {
    lcd.setCursor(0, 0);
    lcd.print("0 Received");
  }
  else if (duration > 20000 && duration < 28000)
  {
    lcd.setCursor(0, 0);
    lcd.print("1 Received");
  }
  else if (duration > 30000 && duration < 38000)
  {
    lcd.setCursor(0, 0);
    lcd.print("End Message");
  }
}
