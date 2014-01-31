#include "BallCollection.h"
#include "../Commands/RunBallSpinner.h"
#include "../Robotmap.h"

BallCollection::BallCollection() : Subsystem("BallCollection") {
 	leftCenterJaguar = new CANJaguar(leftCenterMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	leftCenterJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Coast);		// set Jag to "coast" when output = 0.0

 	rightCenterJaguar = new CANJaguar(rightCenterMotor, CANJaguar::kPercentVbus);	// set output from -1.0 to 1.0 (same as PWM)
	rightCenterJaguar->ConfigNeutralMode(CANJaguar::kNeutralMode_Coast);		// set Jag to "coast" when output = 0.0
}
    
void BallCollection::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new RunBallSpinner());
}

void BallCollection::SpinLeft(float spinSpeed) {
	leftCenterJaguar->Set(spinSpeed);
	leftAmps =(leftCenterJaguar->GetOutputCurrent());
}

void BallCollection::SpinRight(float spinSpeed) {
	rightCenterJaguar->Set(spinSpeed);
	rightAmps = (rightCenterJaguar->GetOutputCurrent());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
