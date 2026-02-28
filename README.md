🚗 Arduino Bluetooth Controlled RC Car
📌 Overview
This project is a Bluetooth-controlled RC car built using Arduino and the L293D motor shield.
The car is controlled using a mobile Bluetooth app.
Arrow commands are sent via Bluetooth and the Arduino controls the motors accordingly.

🧠 How It Works
HC-05 Bluetooth module receives commands from mobile.
Arduino reads the character command.
Based on the command:
'1' → Move Forward
'2' → Move Backward
'3' → Turn Left
'4' → Turn Right
'0' → Stop
AFMotor library controls the motors through the L293D shield.

🔌 Bluetooth Connection
| HC-05 Pin | Arduino Pin |
| --------- | ----------- |
| TX        | A0 (14)     |
| RX        | A1 (15)     |
| VCC       | 5V          |
| GND       | GND         |


🟢 L293D Motor Shield
You do NOT manually connect IN1, IN2 etc.
The shield directly sits on top of Arduino.

🔴 DC Motors
| Motor       | Connect To            |
| ----------- | --------------------- |
| Left Motor  | M1 terminal on shield |
| Right Motor | M2 terminal on shield |

🟡 Power Supply
Connect battery + → Motor shield EXT_PWR +
Connect battery – → GND

🧠 Important Internal Pin Usage (Motor Shield)
When using AFMotor library:
M1 uses PWM pin 11 internally
M2 uses PWM pin 3 internally
Other digital pins are automatically managed
That’s why you don’t need to define motor pins in code.

## 🎥 Demo Video
Watch the working demo of the project here:  
[![Watch Demo](https://img.shields.io/badge/Watch%20Demo-YouTube-red?logo=youtube)](https://youtu.be/pKmUPDgrvU4)
