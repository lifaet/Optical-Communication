
//sender//
int sendBit;
bool serialCheck = false;
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  digitalWrite(7, LOW);
  delay(500);
}
void loop() {
  recvOneChar();
  sender();
  delay(50);
}

void recvOneChar() {
  if (Serial.available() > 0) {
    sendBit = Serial.read();
    serialCheck = true;
  }
}

void sender() {
  if (sendBit == '1') {
    on();
  } else if (sendBit == '0') {
    off();
  } else if (sendBit == '2') {
    par();
  }
}

//0
void off() {
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(7, LOW);
  Serial.println("'0' Send");
}

//1
void on() {
  digitalWrite(7, HIGH);
  delay(20);
  digitalWrite(7, LOW);
  Serial.println("'1' Send");
}

//End
void par() {
  digitalWrite(7, HIGH);
  delay(30);
  digitalWrite(7, LOW);
  Serial.println("End Message");
}
