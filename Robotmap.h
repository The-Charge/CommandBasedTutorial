#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
#define leftFrontMotor 6		// Jag on CAN Buss
#define rightFrontMotor 11		// Jag on CAN Buss
#define leftRearMotor 18		// Jag on CAN Buss
#define rightRearMotor 5		// Jag on CAN Buss
#define shifterShifterLeft 1	// PWM port for left shifter servo
#define shifterShifterRight 2	// PWM port for right shifter servo

#define firstservo 5		// Servo on PWM channel 5

#define rightStick 1		// Right JoyStick  Plug this one in first!
// #define leftStick 2		// Left JoyStick

#endif
