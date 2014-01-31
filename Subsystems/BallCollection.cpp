#include "BallCollection.h"
#include "../Commands/RunBallSpinner.h"
#include "../Robotmap.h"
#include "NetworkTables/NetworkTable.h"

	LiveWindow *lw;
	
BallCollection::BallCollection() : Subsystem("BallCollection") {
 	leftCenterJaguar = new CANJaguar(leftCenterMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	leftCenterJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Coast);		// set Jag to "coast" when output = 0.0
	lw->AddActuator("BallCollection", "LeftCenterJag", (CANJaguar*) leftCenterJaguar);
	
 	rightCenterJaguar = new CANJaguar(rightCenterMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	rightCenterJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Coast);		// set Jag to "coast" when output = 0.0
	lw->AddActuator("BallCollection", "RightCenterJag", (CANJaguar*) rightCenterJaguar);
}
    
void BallCollection::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new RunBallSpinner());
}

void BallCollection::SpinLeft(float spinSpeed) {
	leftCenterJaguar->Set(spinSpeed);
	SmartDashboard::PutNumber("LeftCenterAmps: ",leftCenterJaguar->GetOutputCurrent());
	leftAmps =(leftCenterJaguar->GetOutputCurrent());
	cout << "LeftAmps: " << leftAmps << "Amps";
}

void BallCollection::SpinRight(float spinSpeed) {
	rightCenterJaguar->Set(spinSpeed);
	SmartDashboard::PutNumber("RightCenterAmps: ",rightCenterJaguar->GetOutputCurrent());
	rightAmps = (rightCenterJaguar->GetOutputCurrent());
	cout << "RightAmps: " << rightAmps << "Amps";
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
