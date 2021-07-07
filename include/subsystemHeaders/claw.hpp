#include "main.h"

//HELPER FUNCTION (DECLARATION)
void setClawMotor(int distance);

//CONTROL FUNCTION (DECLARATION)
int claw_state = -1; //claw not closed: -1
void controlClawLift();
