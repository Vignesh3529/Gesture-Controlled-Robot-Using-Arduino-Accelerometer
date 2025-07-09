# Gesture-Controlled-Robot-Using-Arduino-Accelerometer
A 2-wheel robot car that moves based on hand gestures, using an accelerometer (like ADXL335/ADXL345) worn on the hand, and an RF module to transmit signals to the robot.

# 🤖 Gesture Controlled Robot using Arduino and ADXL Accelerometer

Control a robot using your hand gestures! This project uses an ADXL sensor to detect tilt and sends signals wirelessly to control the robot’s direction.

## 🔧 Components Required

### Transmitter (Hand Unit)
- Arduino Nano/Uno
- ADXL335 or ADXL345 (accelerometer)
- RF Transmitter (433 MHz)
- 9V Battery + Clip

### Receiver (Robot Car)
- Arduino Uno/Nano
- RF Receiver (433 MHz)
- L293D Motor Driver
- 2 DC Motors + Chassis
- 9V or 12V Battery Pack
- Jumper Wires

## 📡 Working Principle
- Accelerometer detects hand tilt (X and Y axes)
- Arduino encodes direction (forward/backward/left/right)
- RF Transmitter sends data
- RF Receiver on robot decodes and moves motors accordingly

## 🧠 Robot Directions
- Hand forward → Robot forward
- Hand back → Robot reverse
- Tilt left/right → Robot turns left/right

## 💻 Code
- `transmitter.ino`: Reads ADXL and sends direction
- `receiver.ino`: Decodes and runs motors

[View Transmitter Code](code/transmitter.ino)  
[View Receiver Code](code/receiver.ino)

## 🚀 Extensions
- Use Bluetooth instead of RF
- Add object detection using Ultrasonic sensor
- Control via smartphone using MPU6050 and BLE
