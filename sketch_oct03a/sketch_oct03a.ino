// File: sketch_oct03a.ino
// Description: Switching on LED by 1 and 0 in Arduino
// Environment: Arduino IDE
//
// MIT License
// Copyright (c) 2018 Valentyn N Sichkar
// github.com/sichkar-valentyn
// Reference to:
// [1] Valentyn N Sichkar. Switching on LED by 1 and 0 in Arduino // GitHub platform [Electronic resource]. URL: https://github.com/sichkar-valentyn/Switching_on_LED_by_1_and_0 (date of access: XX.XX.XXXX)

// Setting constants
int b = 0;

// Putting setup code here, to run once
void setup() {
    pinMode(8,OUTPUT);
    Serial.begin(9600);
}
 
// Putting main code here, to run repeatedly
void loop() {
    
    // Reading the data from Serial Port
    if(Serial.available() > 0) b = Serial.read() - 48;
    
    if(b == 1) digitalWrite(8,HIGH);
    if(b == 0) digitalWrite(8,LOW);
}
