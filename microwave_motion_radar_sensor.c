/*
    Project name: ESP32 Microwave Motion Sensor RADAR Sensor
    Modified Date: 24-06-2024
    Code by: Projectslearner
    Website: https://projectslearner.com/learn/esp32-microwave-motion-sensor-radar
*/

const int radarSensorPin = 2; // GPIO pin connected to the RADAR sensor
int motionDetected; // Variable to store the motion detection status

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(radarSensorPin, INPUT); // Set the RADAR sensor pin as INPUT
}

void loop() {
  // Read the digital value from the RADAR sensor
  motionDetected = digitalRead(radarSensorPin);

  // Check if motion is detected
  if (motionDetected == HIGH) {
    Serial.println("Motion Detected!");
  } else {
    Serial.println("No Motion.");
  }

  delay(1000); // Delay before the next reading
}
