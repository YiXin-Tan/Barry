#include "main.h"

//HELPER FUNCTION (DECLARATION)
void setDriveMotor(int left, int right);
void resetDriveEncoders();
double getAveragePosition();

//DRIVER CONTROL (DECLARATION)
void controlSetDrive();

//AUTONOMOUS CONTROL (DECLARATION)
void translate(int units, int voltage);
