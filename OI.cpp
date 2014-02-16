#include "OI.h"
#include "Commands/ExampleCommand.h"
#include "Commands/DriveMotorOneSec.h"
#include "Robotmap.h"
#include "Commands/ShifterHigh.h"
#include "Commands/ShifterLow.h"

OI::OI() {
	// Process operator interface input here.
	rightJoy = new Joystick(rightStick);
	
	button1 = new JoystickButton(rightJoy, 1);
	button1->WhenPressed(new ExampleCommand());
	
	button2 = new JoystickButton(rightJoy, 2);
	button2->WhileHeld(new ExampleCommand());
	
	button3 = new JoystickButton(rightJoy, 3);
	button3->WhenReleased(new ExampleCommand());
	
	button4 = new JoystickButton(rightJoy, 4);
	button4->WhenPressed(new DriveMotorOneSec());
	
	shiftHighButton = new InternalButton;
	shiftLowButton  = new InternalButton;
	
	if ((rightJoy->GetRawAxis(5)) == -1) {
			shiftHighButton->SetPressed(true);
			shiftLowButton->SetPressed(false);
	}
	else if ((rightJoy->GetRawAxis(5)) ==  1) {
		shiftHighButton->SetPressed(false);
		shiftLowButton->SetPressed(true);
	}
	else {
		shiftHighButton->SetPressed(false);
		shiftLowButton->SetPressed(false);
	}
	
	shiftHighButton->WhenPressed(new ShifterHigh());
	shiftLowButton->WhenPressed(new ShifterLow());
}

Joystick* OI::getDriverJoystick() {
	return rightJoy;
}
