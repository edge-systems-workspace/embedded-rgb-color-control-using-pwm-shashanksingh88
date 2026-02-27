#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

// TODO 1:
// Define RED pin (Use 9)
#define RED_PIN 9

// TODO 2:
// Define GREEN pin (Use 10)
#define GREEN_PIN 10

// TODO 3:
// Define BLUE pin (Use 11)
#define BLUE_PIN 11

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)
    Serial.begin(9600);

    // TODO 5:
    // Configure RGB pins as OUTPUT
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // TODO 6:
    // Print initialization message
    Serial.println("RGB LED Control System");
    Serial.println("Initializing...");
    delay(2000);
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)
    digitalWrite(RED_PIN, HIGH);
    delay(1000);

    // TODO 8:
    // Turn OFF red
    digitalWrite(RED_PIN, LOW);
    delay(1000);

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()
    analogWrite(RED_PIN, 255);   // Full brightness

    // TODO 10:
    // Set GREEN brightness using analogWrite()
    analogWrite(GREEN_PIN, 100); // Medium brightness

    // TODO 11:
    // Set BLUE brightness using analogWrite()
    analogWrite(BLUE_PIN, 50);   // Low brightness

    // TODO 12:
    // Add delay for visible transition
    delay(2000);

    // Turn OFF all colors before repeating
    analogWrite(RED_PIN, 0);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 0);
    delay(1000);
}