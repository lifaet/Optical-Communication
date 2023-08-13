int sendBit;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  digitalWrite(8, LOW);
  delay(500);
}
void loop()
{
  if (Serial.available() > 0)
  {
    sendBit = Serial.read();
    if (sendBit)
    {
      Serial.println(sendBit);
    }
  }

  if (sendBit == '1')
  {
    digitalWrite(8, HIGH);
    delay(20);
    digitalWrite(8, LOW);
    Serial.println("'1' Send");
  }
  else if (sendBit == '0')
  {
    digitalWrite(8, HIGH);
    delay(10);
    digitalWrite(8, LOW);
    Serial.println("'0' Send");
  }
}
