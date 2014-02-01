#ifndef MOTORCONTROLSUBSYSTEM_H
#define MOTORCONTROLSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author mike
 */
class MotorControlSubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANJaguar *leftFrontJaguar;
	CANJaguar *leftRearJaguar;
//	CANJaguar *rightFrontJaguar;
	Jaguar	*rightFrontJaguar;
	CANJaguar *rightRearJaguar;
	
public:
	MotorControlSubsystem();
	void InitDefaultCommand();
	void DriveLeft(float Leftspeed);
	void DriveRight(float Rightspeed);

};

#endif
