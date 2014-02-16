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
	JoystickButton* button5;		// Shift Low on xBox 360
	JoystickButton* button6;		// Shift High on xBox 360
	InternalButton* shiftHighButton;		// Run ShifterHigh command
	InternalButton* shiftLowButton;			// Run ShifterLow command
};

#endif
