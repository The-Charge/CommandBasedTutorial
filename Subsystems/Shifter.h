#ifndef SHIFTER_H
#define SHIFTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Mike
 */
class Shifter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
public:
	Shifter();
	void InitDefaultCommand();
	void ShiftHigh();
	void ShiftLow();
	void ShiftOff();
	Servo* shifterLeft;
	Servo* shifterRight;
	Timer* shiftTimer;
};

#endif
