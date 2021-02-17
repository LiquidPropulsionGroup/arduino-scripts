int fromPi = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    fromPi = Serial.read();
    if (fromPi = 'O') {
      digitalWrite(2, HIGH);
      Serial.print('O');
    }
    if (fromPi = 'F') {
      digitalWrite(2, LOW);
      Serial.print('F');
    }
  }
}
