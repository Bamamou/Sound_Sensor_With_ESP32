// This project implements the simulation and test of a Hiletgo FC-04 sound sensor with ESP32 in VsCode with PlatformIo and WokWi. 
// The sound level from the sensor is used to trigger the LED to turn On or OF

#include <Arduino.h>
// Define the pin configuration of the LED and Sound Sensor
#define Sound_Sensor 35
#define Led_Pin 4
const int Sound_Threathold = 200;
void setup() {
  // put your setup code here, to run once:
  pinMode(Sound_Sensor, INPUT);
  pinMode(Led_Pin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sound = analogRead(Sound_Sensor);   // Read the output of the sensor 
  digitalRead(Led_Pin);                  // Read the output pin of the LED to update its stae 
  if (sound>Sound_Threathold && digitalRead(Led_Pin)==false)
  {
    digitalWrite(Led_Pin, HIGH);
    Serial.println("ON");
  }
  else if (sound>Sound_Threathold && digitalRead(Led_Pin)==true)
  {
    digitalWrite(Led_Pin, LOW);
    Serial.println("OFF");
  }
  
}