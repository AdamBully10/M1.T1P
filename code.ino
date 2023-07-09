void setup()
{
  pinMode(13, OUTPUT); // LED
  pinMode(2, INPUT); // Motion Sensor
  Serial.begin(9600); // Initialize Serial communication
}

void loop()
{
  int val = digitalRead(2); // Read motion sensor
  
  if (val == HIGH) // Turn LED on
  {
    digitalWrite(13, HIGH);
    Serial.println("Motion Detected: LED is OFF");
  }
  
  else // LED off
  {
    digitalWrite(13, LOW);
    Serial.println("No Motion Detected: LED is OFF");
  }
  
  delay(10);
}