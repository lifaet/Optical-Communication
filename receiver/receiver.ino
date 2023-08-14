void setup() {
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long duration = pulseIn(8, HIGH);
  if (duration) {
    Serial.println(duration);
  }
  if (duration > 10000 && duration < 18000)
  {
    Serial.println("0 Received");
  }
  else if (duration > 20000 && duration < 28000)
  {
    Serial.println("1 Received");
  }
}
