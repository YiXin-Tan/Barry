#include "main.h"

//HELPER FUNCTIONS (DEFINITION)
void setDriveMotor(int left, int right){
  driveLeftFront = left;
  driveLeftBack = left;
  driveRightFront = right;
  driveRightBack = right;
}

void resetDriveEncoders(){
  driveLeftFront.tare_position();
  driveLeftBack.tare_position();
  driveRightFront.tare_position();
  driveRightBack.tare_position();
}

double getAveragePosition(){
  return fabs(driveLeftFront.get_position() +
              driveLeftBack.get_position() +
              driveRightFront.get_position() +
              driveRightBack.get_position()) / 4;
}


//DRIVER CONTROL (DEFINION)
void controlSetDrive(){
  int joystickLeft = master.get_analog(ANALOG_LEFT_Y);
  int joystickRight = master.get_analog(ANALOG_RIGHT_X);
  if(abs(joystickLeft) < 10)
    joystickLeft = 0;
  if(abs(joystickRight) < 10)
    joystickRight = 0;
  printf("L%d R%d \n", joystickLeft, joystickRight);
  setDriveMotor(joystickLeft, joystickRight);
}

//AUTONOMOUS CONTROL (DEFINITION)
void translate(int units, int voltage){
  int direction = abs(units) / units;
  resetDriveEncoders();
  while(getAveragePosition() < abs(units)){
    setDriveMotor(direction * voltage, direction * voltage);
    pros::delay(20);
  }
  setDriveMotor(direction * -10, direction * -10);
  pros::delay(50);
  setDriveMotor(0,0);
}
