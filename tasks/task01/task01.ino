int ledPins[] = {3, 5, 6, 9, 10};
int intervals[] = {10000, 1000, 500, 100, 50};
int ledStates[] = {LOW, LOW, LOW, LOW, LOW};
unsigned long previousMicros[] = {0, 0, 0, 0, 0};


void setup() {
  for(int i = 0; i < sizeof(ledPins)/sizeof(ledPins[0]); i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  unsigned long currentMicros = micros();
  
  for(int i = 0; i < sizeof(ledPins)/sizeof(ledPins[0]); i++){
    if (currentMicros - previousMicros[i] >= intervals[i]) 
    {
      previousMicros[i] = currentMicros;
      if (ledStates[i] == LOW) {
        ledStates[i] = HIGH;
      } 
      else 
      {
        ledStates[i] = LOW;
      }
    }
    digitalWrite(ledPins[i], ledStates[i]);

  }

Serial.println("asd");

}
