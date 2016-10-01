const int LED = 13;
const int SWITCH_PIN = 8;
bool ledState = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);
}

void loop() {
  if(digitalRead(SWITCH_PIN) == HIGH) {
     delay(50);
     if(digitalRead(SWITCH_PIN) == LOW) {
      Serial.print("Switch\n");
      ledState = ledState == LOW ? HIGH : LOW;
      digitalWrite(LED, ledState);
     }
  }
}
