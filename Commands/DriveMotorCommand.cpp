#include "DriveMotorCommand.h"

DriveMotorCommand::DriveMotorCommand() {
	// Use requires() here to declare subsystem dependencies
	Requires(motorControlSubsystem);
}

// Called just before this Command runs the first time
void DriveMotorCommand::Initialize() {
	motorControlSubsystem->DriveLeft(0);		// Shutdown motor	
	motorControlSubsystem->DriveRight(0);		// Shutdown motor	

}

// Called repeatedly when this Command is scheduled to run
void DriveMotorCommand::Execute() {
	motorControlSubsystem->DriveRight (((oi->rightJoy->GetX())+(oi->rightJoy->GetY()))/2);
	motorControlSubsystem->DriveLeft  (((oi->rightJoy->GetY())-(oi->rightJoy->GetX()))/2);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveMotorCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveMotorCommand::End() {
	motorControlSubsystem->DriveLeft(0);		// Shutdown motor
	motorControlSubsystem->DriveRight(0);		// Shutdown motor

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveMotorCommand::Interrupted() {
	motorControlSubsystem->DriveLeft(0);		// Shutdown motor
	motorControlSubsystem->DriveRight(0);		// Shutdown motor

}
