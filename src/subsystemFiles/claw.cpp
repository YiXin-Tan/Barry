#include "main.h"

//HELPER FUNCTION (DECLARATION)
void setClawMotor(int distance){
  lift.move_relative(distance, 100);
}

//CONTROL FUNCTION (DECLARATION)
void controlClawLift(){
  if (master.get_digital_new_press(DIGITAL_R1)){
    claw_state = !claw_state;
    setLiftMotor(claw_state * 100);
  }
}
