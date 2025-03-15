void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
}

void blinkMorse(const char* i) {
  while (*i) {
    if (*i == '.') {
      digitalWrite(LED_BUILTIN, HIGH); 
      delay(200); 
    } else if (*i == '-') {
      digitalWrite(LED_BUILTIN, HIGH); 
      delay(600); 
    }
    digitalWrite(LED_BUILTIN, LOW); 
    delay(200); 
    i++;
  }
}

void loop() {
  blinkMorse("--.."); // Z
  delay(800); 
  blinkMorse("...."); // H
  delay(800);
  blinkMorse(".-"); // A
  delay(800);
  blinkMorse("-."); // N
  delay(800);
  blinkMorse("--."); // G
  delay(5000); 
}