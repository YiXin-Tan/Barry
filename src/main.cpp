#include "main.h"

//comment

void initialize() {
	pros::lcd::initialize();
	pros::lcd::set_text(1, "Hello PROS User!");
	claw.set_brake_mode(MOTOR_BRAKE_HOLD);
	driveLeftFront.set_brake_mode(MOTOR_BRAKE_COAST);
	driveLeftBack.set_brake_mode(MOTOR_BRAKE_COAST);
	driveRightFront.set_brake_mode(MOTOR_BRAKE_COAST);
	driveRightBack.set_brake_mode(MOTOR_BRAKE_COAST);
	lift.set_brake_mode(MOTOR_BRAKE_HOLD);
	autonomous();
}

void disabled() {}
void competition_initialize() {}

//AUTONOMOUS FUNCTIONS
void BlueLeftCorner(){
	translate(-500, 100);
}

void autonomous() {
	BlueLeftCorner();
}

void opcontrol() {
	while(true){
		controlSetDrive();
		pros::delay(20);
	}

}
