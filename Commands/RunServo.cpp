#include "RunServo.h"

RunServo::RunServo() {
	// Use requires() here to declare subsystem dependencies
	Requires(servoSubsystem);
}

// Called just before this Command runs the first time
void RunServo::Initialize() {
	servoSubsystem->Position(.5);		// Center Servo	
}

// Called repeatedly when this Command is scheduled to run
void RunServo::Execute() {
	servoSubsystem->Position(oi->rightJoy->GetZ());

}

// Make this return true when this Command no longer needs to run execute()
bool RunServo::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunServo::End() {
	servoSubsystem->Position(.5);		// Center Servo	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunServo::Interrupted() {
	servoSubsystem->Position(.5);		// Center Servo	
}
