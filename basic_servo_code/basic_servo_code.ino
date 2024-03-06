#include <Servo.h>

Servo myServo;  // Create a Servo object to control the servo motor
int servoPin = 2;  // Define the digital pin connected to the servo

void setup() {
  myServo.attach(servoPin);  // Attach the servo to the specified pin
  myServo.write(0);
  delay(5000);
  myServo.write(90);
  delay(5000);
  myServo.write(45);
}

void loop() {
  // Move the servo to the minimum angle (0 degrees)
  // myServo.write(0);
  // delay(1000);  // Wait for 1 second
  
  // // Move the servo to the maximum angle (180 degrees)
  // myServo.write(180);
  // delay(1000);  // Wait for 1 second
}
