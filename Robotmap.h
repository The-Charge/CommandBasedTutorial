#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
#define leftFrontMotor 2		// Jag on CAN Buss
// #define rightFrontMotor 10		// Jag on CAN Buss
#define rightFrontMotor 1		// PWM-1
#define leftRearMotor 9			// Jag on CAN Buss
#define rightRearMotor 16		// Jag on CAN Buss

#define firstservo 5			// Servo on PWM channel 5

#define rightStick 1	// Right JoyStick  Plug this one in first!
// #define leftStick 2		// Left JoyStick

#endif
