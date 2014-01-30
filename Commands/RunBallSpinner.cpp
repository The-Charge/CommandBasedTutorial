#include "RunBallSpinner.h"

RunBallSpinner::RunBallSpinner() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires (ballCollection);
}

// Called just before this Command runs the first time
void RunBallSpinner::Initialize() {
	ballCollection->SpinLeft(0);		// Shutdown motor
	ballCollection->SpinRight(0);		// Shutdown motor	
}

// Called repeatedly when this Command is scheduled to run
void RunBallSpinner::Execute() {
	ballCollection->SpinLeft ((oi->rightJoy->GetThrottle())*-1);		// Invert left motor
	ballCollection->SpinRight(oi->rightJoy->GetThrottle());
}

// Make this return true when this Command no longer needs to run execute()
bool RunBallSpinner::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunBallSpinner::End() {
	ballCollection->SpinLeft(0);		// Shutdown motor
	ballCollection->SpinRight(0);		// Shutdown motor	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunBallSpinner::Interrupted() {
	ballCollection->SpinLeft(0);		// Shutdown motor
	ballCollection->SpinRight(0);		// Shutdown motor	
}
