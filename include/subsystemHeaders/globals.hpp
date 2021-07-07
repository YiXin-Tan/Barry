#include "main.h"

//declare motors and controler objects
//MOTOR OBJECTS DECLARATION
extern pros::Motor driveLeftFront;
extern pros::Motor driveLeftBack;
extern pros::Motor driveRightFront;
extern pros::Motor driveRightBack;
extern pros::Motor claw;
extern pros::Motor lift;

//CONTROLER OBJECT DECLARATION
extern pros::Controller master;

//SENSOR OBJECTS DECLARATION
extern pros::ADIPotentiometer potentiometer;
extern pros::ADIDigitalIn button;
extern pros::ADIGyro gyro;

//MISCALANIOUS CONSTANTS
#define MTR_LEFT_FRONT_PORT 11
#define MTR_LEFT_BACK_PORT 12
#define MTR_RIGHT_FRONT_PORT 14
#define MTR_RIGHT_BACK_PORT 16
#define MTR_CLAW_PORT 1
#define MTR_LIFT_PORT 2
#define SENSOR_POTENTIOMETER_PORT 'A'
#define SENSOR_GYRO_PORT 'B'
#define SENSOR_BUTTON_PORT 'C'
