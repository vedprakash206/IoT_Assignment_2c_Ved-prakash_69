int touchPin = 7;
int buzz = 13;

void setup(){
  pinMode(touchPin, INPUT);
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
  Serial.println("Touch Sensor and other ready");
}

void loop(){
  int touchState = digitalRead(touchPin);

  if (touchState == HIGH){
    digitalWrite(buzz, HIGH);
    Serial.println("Touched");
  } else {
    digitalWrite(buzz,LOW);
    Serial.println("No touch.Buzzer off");
  }
  delay(100);
}
