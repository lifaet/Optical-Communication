int sendBit;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
}
void loop()

{
  if (Serial.available() > 0)
  {
    sendBit = Serial.read();
  }

  if (sendBit == '1')
  {
    digitalWrite(8, HIGH);
    delay(10);
    digitalWrite(8, LOW);
    Serial.println("'0' Send");
  }
  else if (sendBit == '0')
  {
    digitalWrite(8, HIGH);
    delay(20);
    digitalWrite(8, LOW);
    Serial.println("'1' Send");
  }
  else if (sendBit == '2')
  {
    digitalWrite(8, HIGH);
    delay(30);
    digitalWrite(8, LOW);
    Serial.println("End Message");
  }
  delay(50);
}
