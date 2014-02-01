#include "CenterServo.h"

CenterServo::CenterServo() {
	// Use requires() here to declare subsystem dependencies
	Requires(servoSubsystem);
}

// Called just before this Command runs the first time
void CenterServo::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CenterServo::Execute() {
	servoSubsystem->Position(.5);		// Center Servo	
}

// Make this return true when this Command no longer needs to run execute()
bool CenterServo::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CenterServo::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CenterServo::Interrupted() {
}
