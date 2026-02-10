
void setup()
{
  pinMode(2, INPUT);   // PIR sensor
  pinMode(7, OUTPUT);  // Buzzer
  digitalWrite(7, LOW); // Buzzer off at start
  delay(2000); // Wait for sensor to be stable
}

void loop()
{
  // Read motion sensor
  int motion = digitalRead(2);
  
  // If motion detected, turn buzzer on
  if (motion == HIGH) {
    digitalWrite(7, HIGH); // Buzzer ON
  }
  else {
    digitalWrite(7, LOW);  // Buzzer OFF
  }
  
  delay(2000); // Wait 2 seconds
}