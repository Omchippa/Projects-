Robotic Arm Control with Obstacle Detection – Arduino

This Arduino project controls a 3-axis robotic arm with a gripper, using stepper motors and A4988 motor drivers. It also includes obstacle detection using an ultrasonic sensor (HC-SR04) to ensure safe operation. If an object is detected within 50 cm, all motor movement pauses temporarily.

🔧 Features

✅ Controls 3 stepper motors:

Base rotation motor

Arm up/down motor

Gripper open/close motor

✅ Each motor uses direction and pulse pins

✅ Built-in obstacle detection using ultrasonic sensor

✅ Motion pauses automatically during obstacle detection

✅ Serial monitor status messages

✅ Adjustable motor movement steps

⚙️ Hardware Required
Component	Quantity
Arduino Uno / Mega	1
A4988 Stepper Drivers	3
NEMA17 Stepper Motors	3
HC-SR04 Ultrasonic Sensor	1
Power Supply (12V recommended)	1
Connecting Wires	-
🔌 Pin Configuration
Purpose	Arduino Pin
Base Motor Direction	8
Base Motor Pulse	3
Arm Motor Direction	11
Arm Motor Pulse	10
Gripper Motor Direction	7
Gripper Motor Pulse	12
Ultrasonic Trigger	6
Ultrasonic Echo	9
🚦 Motion Commands
Variable	Description	Value
g3	Base rotate left	-3000
g4	Base rotate right	+3000
g5	Arm up	+7200
g6	Arm down	-7200
g7	Gripper close	+6000
g8	Gripper open	-6000
🧠 Code Workflow

Arm moves up

Gripper closes

Base rotates to the right

Arm moves down

Gripper opens to release

Base rotates back to initial position

Loop repeats continuously

During every motor step, the ultrasonic sensor checks for nearby obstacles. If any object is detected under 50 cm, the system pauses for 5 seconds and then resumes movement.

🔉 Obstacle Detection

The checkObstacle() function uses the HC-SR04 ultrasonic sensor to measure distance. If distance < 50 cm, all motor movement stops temporarily for safety.

📜 Serial Monitor Output

When an obstacle is detected, the serial monitor will display:

Object detected !!! Stopping motors for 5 seconds.
Resuming motors !!!

▶️ How to Use

Connect motors and sensor as per the pin configuration.

Upload the code to Arduino.

Open Serial Monitor at 9600 baud rate.

Power the stepper motors separately from Arduino (with common ground).

✅ Future Improvements

Add limit switches for motor safety

Smooth acceleration using stepper libraries

Control with Bluetooth or joystick

Add pick-and-place automation