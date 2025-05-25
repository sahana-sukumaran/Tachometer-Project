# 🔧 Tachometer Project

## 📋 Overview

This project is a Tachometer designed to measure the rotational speed (RPM) of a shaft or disk. It was developed as a **college team project** to demonstrate practical skills in electronics, microcontrollers, and embedded programming.

## ✨ Features

- Accurate RPM measurement using a Hall effect sensor
- Real-time speed monitoring
- RPM display on a 16x2 LCD screen

## 👩‍💻 Team Members

- Sahana Sukumaran  
- Mugashree K  
- Bernice Cynthia P  
- Radhiha BR  

## 🔌 Hardware Components

- **Microcontroller**: Arduino Nano  
- **Sensor**: Hall effect sensor  
- **Display**: 1602 LCD display  
- **Others**: Jumper wires, Breadboard, USB cable  

## 🛠️ Software/Tools Used

- **Programming Language**: C++  
- **IDE**: Arduino IDE  
- **Library**: LiquidCrystal  

## ⚙️ How to Use

### 1. Hardware Setup

- Fix the Arduino board, LCD, and Hall effect sensor module on a breadboard or base.
- Ensure all components are secure and won't shift during rotation.

### 2. Wiring Connections

#### LCD → Arduino

| LCD Pin | Arduino Pin | Description           |
|---------|-------------|-----------------------|
| DB7     | D2          | Data bit 7            |
| DB6     | D3          | Data bit 6            |
| DB5     | D4          | Data bit 5            |
| DB4     | D5          | Data bit 4            |
| E       | D11         | Enable pin            |
| R/W     | GND         | Write mode            |
| RS      | D12         | Register select       |
| VCC     | 5V          | Power supply          |
| VSS     | GND         | Ground                |
| R5      | GND         | Contrast control      |
| VEE     | GND         | Contrast control      |

#### Hall Sensor → Arduino

| Sensor Pin | Arduino Pin | Description       |
|------------|-------------|-------------------|
| VCC        | 5V          | Power             |
| GND        | GND         | Ground            |
| AO         | A0          | Analog input pin  |

### 3. Upload the Code

1. Open the Arduino IDE  
2. Load the code from [`tachometer.ino`](./tachometer.ino)  
3. Connect your Arduino Nano via USB  
4. Upload the code  

### 4. Power the Circuit

- Use USB or an external 5V power supply to power the board.

### 5. Measure RPM

- Attach a small **magnet** securely to the rotating object (wheel, shaft, etc.).
- When it passes near the Hall effect sensor, a pulse is counted.
- RPM is updated every second on the LCD.
- You can also view readings via the Serial Monitor.

---

## ✅ Expected Results

- **Raw Sensor Values**: The Serial Monitor will print analog readings from the Hall effect sensor.  
  - ~0–600 when no magnet is nearby  
  - >600 when the magnet passes close  

- **Pulse Counting**: One pulse per magnet pass (rotation or partial rotation)

- **RPM Calculation**:  
