# Sound_Sensor_With_ESP32
+ This project implements the simulation and test of the Hiletgo FC-04 sound sensor with ESP32 in VsCode with PlatformIo and WokWi. 
+ The sound level from the sensor is used to trigger the LED to turn On or OFF
+ The simulation is availbe at https://wokwi.com/projects/358379202260047873
+ The sensor can be gotten form https://www.amazon.com/HiLetgo-Sensor-Module-Detect-Control/dp/B00LW14ZEI/ref=mp_s_a_1_5?keywords=sound+sensor&qid=1678036429&sr=8-5
# Pin Configuration
+ The VCC or + is connected to the 3V3 or 3.3V Pin of the ESp32
+ The GND or ground Pin is connected to the GND of the ESP32
+ The OUT pin is connected to the D35 of the ESP32 which is an anolog pin
+ The LED is connected to the GPIO D4 of the ESp32
