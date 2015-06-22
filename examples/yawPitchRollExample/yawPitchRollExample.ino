#include <Wire.h>
#include <FreeSixIMU.h>

FreeSixIMU imu;


void setup() {
  
  imu.init();
  
  Serial.begin(9600);
}

void loop() {
  
  float angles[3];
    
  imu.getYawPitchRoll(angles);  
  
  Serial.print("Yaw: ");
  Serial.print(angles[0]);
  Serial.print("    Pitch: ");
  Serial.print(angles[1]);
  Serial.print("    Roll: ");
  Serial.println(angles[2]);
}
