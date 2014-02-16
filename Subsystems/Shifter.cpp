#include "Shifter.h"
#include "../Robotmap.h"
#include "../Commands/ShifterHigh.h"
#include "../Commands/ShifterLow.h"
bool shifterIsHigh = true;
bool timing = false;

Shifter::Shifter() : Subsystem("Shifter") {
	shifterLeft = new Servo(shifterShifterLeft);      
	shifterRight = new Servo(shifterShifterRight); 
	shiftTimer = new Timer();
}
    
void Shifter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
//	SetDefaultCommand(new ShifterHigh());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Shifter::ShiftHigh()
{
		shifterLeft->Set(0.25);
		shifterRight->Set(0.25);
}
void Shifter::ShiftLow()
{
		shifterLeft->Set(0.75);
		shifterRight->Set(0.75);
}
void Shifter::ShiftOff()
{
	shifterLeft->SetOffline();
	shifterRight->SetOffline();
}
