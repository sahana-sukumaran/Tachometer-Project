# Tachometer Project
Overview
-This project is a Tachometer designed to measure the rotational speed (RPM) of a shaft or disk. It was developed as a college team project to demonstrate practical skills in electronics, microcontrollers, and embedded programming.

Features
- Measures RPM accurately using Hall effect sensor
- Displays RPM on LCD
- Real-time speed monitoring

Team Members
Sahana Sukumaran
Mugashree K
Bernice Cynthia P
Radhiha BR

Hardware Components
Microcontroller: Arduino Nano
Sensor: Hall effect sensor
Display: 1602 LCD display
Other components: jumper wire, breadboard, USB cable

Software/Tools Used
Programming language: C++

IDE: Arduino IDE

Libraries: LiquidCrystal

How to Use
How to Use
1. Hardware Setup
Fix the Arduino board, LCD, and Hall effect sensor module securely on the breadboard or base.

Make sure all components are stable and won’t move during operation.

2. Wiring Connections
LCD Pin	 Arduino Pin	    Notes
DB7      D2	              Data bit 7
DB6	     D3	              Data bit 6
DB5	     D4             	Data bit 5
DB4	     D5	              Data bit 4
E        D11	            LCD enable pin
R/W   	 GND              Set to ground (write mode)
RS       D12	            LCD register select pin
VCC   	 5V	              Power
VSS	     GND	            Ground
R5       GND	            Contrast pin (connect to GND or potentiometer for adjustable contrast)
VEE      GND              Controls LCD contrast

Hall Sensor   Module Pin	 Arduino Pin	Notes
VCC	          5V	         Power
GND	          GND	         Ground
AO 	          A0	         Analog input pin for sensor output

3. Upload Code
Open your Arduino IDE.
Paste the code given - 
Connect your Arduino to the PC using USB.
Upload the code to the Arduino board.

4. Power the Circuit
You can power the Arduino via USB or an external 5V power supply.
Ensure all connections remain secure and stable.

5. Measure RPM
Attach a small magnet firmly to the rotating object (e.g., wheel, shaft).
Rotate the object near the Hall effect sensor.
The sensor detects each passing magnet, and the Arduino counts pulses.
The LCD displays the current RPM, updating every second.
You can also monitor RPM values via the Serial Monitor in the Arduino IDE.

Expected Results when running this on hardware:
Raw Sensor Values: The Serial Monitor will print analog readings from your Hall effect sensor continuously, values will fluctuate depending on magnetic field presence. You’ll see values below 600 when no magnet is near and above 600 when the magnet passes by the sensor.
Pulse Counting and RPM Calculation: Each time the sensor reading crosses above the threshold (600), it counts as one pulse (one rotation or part of a rotation depending on your setup).
RPM Display: Every second, the LCD will update showing the RPM calculated as:
RPM = number_of_pulses_in_1_second * 60
