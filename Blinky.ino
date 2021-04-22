const pin_t MY_LED = D7;
SYSTEM_THREAD(ENABLED);

void setup() {
    pinMode(MY_LED, OUTPUT);
}

void loop() {
    // Start off
    digitalWrite(MY_LED, LOW);
    
    delay(1s);
    // dash = 1s
    // dot = 500ms
    
    // R - Dash, Dot, Dash
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    // U - Dot, Dot, Dash
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    // B - Dash, Dot, Dot, Dot
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    
    // E - Dot
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    // N - Dash, Dot
    digitalWrite(MY_LED, HIGH);
    delay(1s);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    digitalWrite(MY_LED, HIGH);
    delay(500ms);
    digitalWrite(MY_LED, LOW);
    delay(1s);
    
    // Signify End
    digitalWrite(MY_LED, HIGH);
    delay(100ms);
    digitalWrite(MY_LED, LOW);
    delay(100ms);
    
    digitalWrite(MY_LED, HIGH);
    delay(100ms);
    digitalWrite(MY_LED, LOW);
    delay(100ms);
    
    digitalWrite(MY_LED, HIGH);
    delay(100ms);
    digitalWrite(MY_LED, LOW);
    delay(100ms);
    
    digitalWrite(MY_LED, HIGH);
    delay(100ms);
    digitalWrite(MY_LED, LOW);
    delay(100ms);
    
    digitalWrite(MY_LED, HIGH);
    delay(100ms);
    digitalWrite(MY_LED, LOW);
    delay(100ms);

}
