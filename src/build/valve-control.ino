void setup() {
    Serial.begin(9600);
    pinMode(2, OUTPUT); // LOX Valve
    pinMode(3, OUTPUT); // FUEL Valve
    int fromPi = 0;
}

void loop() {
    if (Serial.available() > 0) {
        fromPi = Serial.read();
        if (fromPi = 'L') { digitalWrite(2, HIGH); Serial.print('O'); } // LOX on
        if (fromPi = 'X') { digitalWrite(2, LOW); Serial.print('F'); } // LOX off
        if (fromPi = 'F') { digitalWrite(3, HIGH); Serial.print('O'); } // FUEL on
        if (fromPi = 'O') { digitalWrite(3, LOW); Serial.print('F'); } // FUEL off
        if (fromPi = 'T') { Serial.print('R'); } // Test com Response
    }
}