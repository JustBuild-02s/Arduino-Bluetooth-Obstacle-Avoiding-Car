#include <AFMotor.h>
#include <SoftwareSerial.h>

// Bluetooth on A0/A1
SoftwareSerial BT(14, 15); // RX=A0, TX=A1

AF_DCMotor leftMotor(1);
AF_DCMotor rightMotor(2);

const uint8_t SPEED = 180;

void setup() {
  BT.begin(9600);
  leftMotor.setSpeed(SPEED);
  rightMotor.setSpeed(SPEED);
  stopCar();
}

void loop() {
  if (BT.available()) {
    char c = BT.read();

    switch (c) {
      case '1': forward();  break;
      case '2': backward(); break;
      case '3': left();     break;
      case '4': right();    break;
      case '0': stopCar();  break;
      default:  stopCar();  break;
    }
  }
}

void forward()  { leftMotor.run(FORWARD);  rightMotor.run(FORWARD);  }
void backward() { leftMotor.run(BACKWARD); rightMotor.run(BACKWARD); }
void left()     { leftMotor.run(BACKWARD); rightMotor.run(FORWARD);  }
void right()    { leftMotor.run(FORWARD);  rightMotor.run(BACKWARD); }
void stopCar()  { leftMotor.run(RELEASE);  rightMotor.run(RELEASE); }
