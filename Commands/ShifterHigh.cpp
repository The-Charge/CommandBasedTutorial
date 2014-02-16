#include "ShifterHigh.h"

ShifterHigh::ShifterHigh() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shifter);
}

// Called just before this Command runs the first time
void ShifterHigh::Initialize() {
//	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void ShifterHigh::Execute() {
	shifter->ShiftHigh();
}

// Make this return true when this Command no longer needs to run execute()
bool ShifterHigh::IsFinished() {
	return false;
//	return IsTimedOut();			// Will be TRUE after 1 second from Init
}

// Called once after isFinished returns true
void ShifterHigh::End() {
//	shifter->ShiftOff();	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShifterHigh::Interrupted() {
	shifter->ShiftOff();	
}
