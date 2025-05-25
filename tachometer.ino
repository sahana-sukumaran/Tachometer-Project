#include <LiquidCrystal.h>

// Initialize the LCD with pin numbers
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Hall effect sensor analog pin
const int hallSensorPin = A0; // Analog pin for Hall effect sensor
unsigned long lastTime = 0;   // Last time RPM was calculated
volatile int pulseCount = 0;  // Counter for pulses

// Threshold for analog signal (adjust as per your sensor output)
const int threshold = 600;    // Higher threshold to filter noise

void setup() {
    lcd.begin(16, 2);          // Initialize LCD
    lcd.print("RPM: ");        // Initial display setup
    Serial.begin(9600);        // Initialize serial communication
}

void loop() {
    int sensorValue = analogRead(hallSensorPin); // Read analog value
    Serial.println(sensorValue); // Debug: print raw sensor value

    // Detect pulse based on the threshold
    static bool magnetDetected = false;
    if (sensorValue > threshold && !magnetDetected) {
        pulseCount++;           // Increment pulse count
        magnetDetected = true;  // Avoid counting the same pulse repeatedly
    } else if (sensorValue <= threshold) {
        magnetDetected = false; // Reset when signal drops below threshold
    }

    // Calculate and display RPM every second
    unsigned long currentTime = millis();
    if (currentTime - lastTime >= 1000) { // 1-second interval
        int rpm = pulseCount * 60;       // Calculate RPM
        pulseCount = 0;                  // Reset pulse count
        lastTime = currentTime;          // Update last time

        // Update LCD display
        lcd.setCursor(4, 0);             // Position for RPM display
        lcd.print(rpm);
        lcd.print("   ");                // Clear any leftover digits

        // Debugging output
        Serial.print("RPM: ");
        Serial.println(rpm);
    }
}
