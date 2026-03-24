This project uses an Ultrasonic Sensor (HC-SR04) with NodeMCU (ESP8266) to measure the distance of an object.
When an object comes near, the buzzer and LED alert the user based on how close the object 
## It can be used for:
- Obstacle detection
- Smart parking systems
- Distance warning systems
- Robotics projects
## Components Required:
- NodeMCU (ESP8266)
- Ultrasonic Sensor (HC-SR04)
- Buzzer
- LED
- Resistor (220Ω for LED)
- Jumper wires
- Breadboards
## Pin Configuration
| Component | NodeMCU Pin | GPIO   |
| --------- | ----------- | ------ |
| Trig      | D5          | GPIO14 |
| Echo      | D6          | GPIO12 |
| Buzzer    | D7          | GPIO13 |
| LED       | D8          | GPIO15 |
## Working
- Ultrasonic sensor sends sound waves.
- Echo receives reflected waves.
- NodeMCU calculates distance.
- Alerts are triggered based on distance.
## Distance Logic
| Distance Range | Action                        |
| -------------- | ----------------------------- |
| 0 – 20 cm      | 🔴 Continuous buzzer + LED ON |
| 20 – 50 cm     | 🟡 Fast beep                  |
| 50 – 100 cm    | 🟢 Slow beep                  |
| > 100 cm       | ⚫ No alert                   |

## Formula Used
       Distance = (Duration × 0.0343) / 2
## How to Run
- Install Arduino IDE
- Add ESP8266 board support
- Connect NodeMCU via USB
- Upload the code
- Open Serial Monitor (9600 baud)
