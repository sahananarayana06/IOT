This project uses an Ultrasonic Sensor (HC-SR04) with NodeMCU (ESP8266) to measure the distance of an object.
When an object comes near, the buzzer and LED alert the user based on how close the object is.

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

## Pin Connections
- Component	      NodeMCU Pin	      GPIO
- Trig Pin	         ^ D5	            GPIO14
- Echo Pin	         D6	            GPIO12
- Buzzer	           D7	            GPIO13
- LED	              D8	            GPIO15

