#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

public:
	OI();
	Joystick* rightJoy;				// First joystick plugged into DS
	Joystick* getDriverJoystick();
	JoystickButton* button1;		// Trigger
	JoystickButton* button2;		// ??
	JoystickButton* button3;		// Unknown
	JoystickButton* button4;		// On left top of joystick
	InternalButton* shiftHighButton;		// Run ShifterHigh command
	InternalButton* shiftLowButton;			// Run ShifterLow command
};

#endif
