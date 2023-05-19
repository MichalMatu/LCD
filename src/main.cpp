#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include <Adafruit_GFX.h>

// Define the pins for the LCD screen
const int i2cAddress = 0x27;

// Create a new instance of the LiquidCrystal_PCF8574 class
LiquidCrystal_PCF8574 lcd(i2cAddress);

void setup() {
  // Initialize the LCD screen
  lcd.begin(16, 2);

  // Print a message to the LCD screen
  lcd.print("Hello, world!");
}

void loop() {
  // Do nothing
}
