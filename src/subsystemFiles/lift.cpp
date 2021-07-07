#include "main.h"

//HELPER FUNCTION
void setLiftMotor(int power){
  lift = power;
}

//CONTROL FUNCTION
void controlSetLift(){
  int p = 127 * (master.get_digital(DIGITAL_L1) - master.get_digital(DIGITAL_L2));
  setLiftMotor(p);
}

//AUTONOMOUS FUNCTION
bool sense_touching_goal(){
  int a = button.get_new_press();
  if (button.get_new_press()){
    printf("%d", button.get_value());
  }
  return button.get_value();
}
