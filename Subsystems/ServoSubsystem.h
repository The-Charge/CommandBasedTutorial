#ifndef SERVOSUBSYSTEM_H
#define SERVOSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Mike
 */
class ServoSubsystem: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Servo *servo1;
	
public:
	ServoSubsystem();
	void InitDefaultCommand();
	void Position(float ServoPosition);
};

#endif
