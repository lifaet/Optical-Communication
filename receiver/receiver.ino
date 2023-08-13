void setup() {
  pinMode(8, INPUT);
  Serial.begin(9600);
  delay(500);
}

void loop() {
  unsigned long duration = pulseIn(8, HIGH);
  if (duration) {
    Serial.println(duration);
  }
  if (duration > 9800 && duration < 15000)
  {
    Serial.println("0 Received");
  }
  else if (duration > 18000 && duration < 25000)
  {
    Serial.println("1 Received");
  }
}
