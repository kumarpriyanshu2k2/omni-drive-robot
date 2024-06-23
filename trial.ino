
 #include "CytronMotorDriver.h"


// Configure the motor driver.
CytronMD motor1(PWM_DIR, 2, 22);  // PWM 1 = Pin 3, DIR 1 = Pin 4.
CytronMD motor2(PWM_DIR, 4, 26);
CytronMD motor3(PWM_DIR, 8, 30); 
CytronMD motor4(PWM_DIR, 10, 34);  // PWM 2 = Pin 9, DIR 2 = Pin 10.


// The setup routine runs once when you press reset.
void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Attach the motor to the motor pin
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read(); // Read the incoming command
    
    // Check the command received and control the motor accordingly
    if (command == 'W') { // Up arrow key
      motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(128);
      motor3.setSpeed(128);
      motor4.setSpeed(128);   // Rotate wheel clockwise (adjust value as needed)
    } else if (command == 'A') { // Down arrow key
      motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(128);
      motor3.setSpeed(128);
      motor4.setSpeed(128);    // Rotate wheel counterclockwise (adjust value as needed)
    } else if (command == 'S') { // Down arrow key
      motor1.setSpeed(-128);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(-128);
      motor3.setSpeed(-128);
      motor4.setSpeed(-128); 
    } else if (command == 'D') { // Down arrow key
      motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(128);
      motor3.setSpeed(128);
      motor4.setSpeed(128);
    
    } else if (command == 'X') { // Down arrow key
      motor1.setSpeed(0);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(0);
      motor3.setSpeed(0);
      motor4.setSpeed(0);
    
    } else if (command == '1') { // Down arrow key
      motor1.setSpeed(128);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(0);
      motor3.setSpeed(0);
      motor4.setSpeed(0);
    
    } else if (command == '2') { // Down arrow key
      motor1.setSpeed(0);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(128);
      motor3.setSpeed(0);
      motor4.setSpeed(0);
      
    } else if (command == '3') { // Down arrow key
      motor1.setSpeed(0);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(0);
      motor3.setSpeed(128);
      motor4.setSpeed(0);
      
    } else if (command == '4') { // Down arrow key
      motor1.setSpeed(0);   // Motor 1 runs forward at 50% speed.
      motor2.setSpeed(0);
      motor3.setSpeed(0);
      motor4.setSpeed(128);
    }      
  }
  }
// The loop routine runs over and over again forever.

