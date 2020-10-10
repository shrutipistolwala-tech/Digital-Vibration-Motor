/* Copyright 2020 By Shruti Pistolwala @technepreneur*/
#include<Wire.h>//I2C library

/* Declaration of pins*/  
const int motorPin = 3; // pin that the vibrationmotor is attached to
const int thresh=100;
void setup() {
 pinMode(motorPin, OUTPUT);
    Serial.begin(9600);
}
void loop() {
 // read the value from the sensor:
    int i = analogRead(motorPin);
     digitalWrite(motorPin, HIGH);     
       Serial.println("Sensor is ON");
         delay(800);
     digitalWrite(motorPin, LOW);
           Serial.println("Sensor is OFF");
                  delay (2000);
}
