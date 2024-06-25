# ESP32 Microwave Motion Sensor RADAR Sensor Project

## Project Overview
The ESP32 Microwave Motion Sensor RADAR Sensor project demonstrates how to use an ESP32 microcontroller to detect motion using a microwave radar sensor. This project is useful for applications requiring motion detection, such as security systems, automatic lighting, and presence detection.

## Components Needed
- ESP32 Microcontroller
- Microwave Motion Sensor (RADAR Sensor)
- Jumper Wires
- Breadboard

## Circuit Setup
1. **Connecting the Microwave Motion Sensor to ESP32:**
   - **Sensor Output:** Connect the digital output pin of the RADAR sensor to GPIO 2 on the ESP32.
   - **Power and Ground:** Connect the VCC and GND pins of the RADAR sensor to the 3.3V and GND pins of the ESP32, respectively.

## Instructions
1. **Setup:**
   - Initialize serial communication in the `setup()` function using `Serial.begin(9600)` for debugging purposes.
   - Set the RADAR sensor pin as an input using `pinMode(radarSensorPin, INPUT)`.

2. **Operation:**
   - In the `loop()` function:
     - Read the digital value from the RADAR sensor using `digitalRead(radarSensorPin)`.
     - Store the reading in the `motionDetected` variable.
     - Check if motion is detected and print the corresponding message to the Serial Monitor.
     - Add a delay of 1 second before the next reading to avoid spamming the Serial Monitor.

3. **Considerations:**
   - **Placement:** Ensure the RADAR sensor is placed in an optimal location for motion detection, avoiding obstructions that could interfere with the sensor's operation.
   - **Sensitivity:** Adjust the sensitivity of the RADAR sensor if possible, to fine-tune the motion detection range and accuracy.
   - **Interference:** Be aware of potential interference from other electronic devices that might affect the sensor's performance.

## Applications
- **Security Systems:** Use motion detection to trigger alarms or notifications when movement is detected in a secured area.
- **Automatic Lighting:** Automatically turn lights on or off based on the presence of motion.
- **Presence Detection:** Implement presence detection in smart home systems to control heating, cooling, or other automation tasks.

## Notes
- **Digital Readings:** The RADAR sensor provides a digital signal indicating motion detection (HIGH) or no motion (LOW).
- **Power Supply:** Ensure the sensor is properly powered for stable and accurate operation.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Microwave Motion Sensor RADAR Sensor](https://projectslearner.com/learn/esp32-microwave-motion-sensor-radar)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
