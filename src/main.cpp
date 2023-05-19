#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>
#include <Adafruit_GFX.h>

// Define the pins for the LCD screen
const int i2cAddress = 0x27;

// Create a new instance of the LiquidCrystal_PCF8574 class
LiquidCrystal_PCF8574 lcd(i2cAddress);

void setup()
{
  // Initialize the LCD screen
  lcd.begin(16, 4);
}

void loop()
{
  // Display "Hello World!" on each line of the screen
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
  lcd.setCursor(0, 4);
  lcd.print("Hello World!");
  lcd.setCursor(0, 6);
  lcd.print("Hello World!");

  delay(1000);
}
