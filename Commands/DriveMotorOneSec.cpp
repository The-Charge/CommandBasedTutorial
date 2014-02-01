#include "DriveMotorOneSec.h"
#include "../Subsystems/MotorControlSubsystem.h"

DriveMotorOneSec::DriveMotorOneSec() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(motorControlSubsystem);		// This is what causes this command
	timer = new Timer();					//     to preempt the joystick
}

// Called just before this Command runs the first time
void DriveMotorOneSec::Initialize() {
	timer->Reset();
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void DriveMotorOneSec::Execute() {
	motorControlSubsystem->DriveLeft(-.3);
	motorControlSubsystem->DriveRight(-.3);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveMotorOneSec::IsFinished() {
	return timer->Get() > 1;
}

// Called once after isFinished returns true
void DriveMotorOneSec::End() {
	motorControlSubsystem->DriveLeft(0);
	motorControlSubsystem->DriveRight(0);

	timer->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveMotorOneSec::Interrupted() {
	motorControlSubsystem->DriveLeft(0);
	motorControlSubsystem->DriveRight(0);

	timer->Stop();
}
