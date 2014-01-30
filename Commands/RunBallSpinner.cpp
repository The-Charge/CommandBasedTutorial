#include "RunBallSpinner.h"
// #include "../Subsystems/BallCollection.h"

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
float rightAmps;
float leftAmps;
int i=0;
float rAmps, lAmps;
// Called repeatedly when this Command is scheduled to run
void RunBallSpinner::Execute() {
	ballCollection->SpinLeft ((oi->rightJoy->GetThrottle())*-1);		// Invert left motor
	ballCollection->SpinRight(oi->rightJoy->GetThrottle());

	if (i == 10) {
		rAmps = rAmps/10;
		lAmps = lAmps/10;
		cout<< "Right Center Motor Current: " << rAmps << " Amps/n";
		cout<< "Light Center Motor Current: " << lAmps << " Amps/n/n";
		i = 0;
	}
	else {
		i++;
		rAmps = rAmps + rightAmps;
		lAmps = lAmps + leftAmps;
	}
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
