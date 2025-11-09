# 🌱 Arduino Soil Moisture Sensor Project

This project monitors the moisture level in soil using an Arduino and a soil moisture sensor. The sensor’s analog output is read by the Arduino, and an LED is used to indicate when the soil is dry. This setup is useful for plant care, smart irrigation, and gardening automation.

---

## 🔧 Components Used
- Arduino Uno / Nano / Mega
- Soil Moisture Sensor (Analog Output)
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

---

## 📌 Working Principle
The soil moisture sensor outputs a value between **0 - 1023**:
- **Low values → Soil is wet**
- **High values → Soil is dry**

When the sensor value crosses the threshold (default: `500`), the LED turns **ON** to indicate dryness.

---

## 🧠 Source Code

```cpp
int sensorPin = A0;
int ledPin = 7;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  if (sensorValue > 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
