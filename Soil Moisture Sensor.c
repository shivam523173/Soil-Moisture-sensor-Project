// Pin Definitions
int sensorPin = A0;   // Soil moisture sensor analog output
int ledPin = 7;       // LED pin

// Variable to store the sensor value
int sensorValue = 0;

void setup() {
  Serial.begin(9600);      // Start serial monitor
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  // Read the sensor value
  sensorValue = analogRead(sensorPin);

  // Show the value in Serial Monitor
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  // If the soil is dry (reads higher value), turn LED ON
  if (sensorValue > 500) {
    digitalWrite(ledPin, HIGH);
  }
  // Otherwise, turn LED OFF
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); // Wait 1 second before next reading
}
