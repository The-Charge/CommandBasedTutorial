#include "ServoSubsystem.h"
#include "../Commands/RunServo.h"
#include "../Robotmap.h"

ServoSubsystem::ServoSubsystem() : Subsystem("ServoSubsystem") {
	servo1 = new Servo(1, firstservo);
}
    
void ServoSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new RunServo());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void ServoSubsystem::Position(float servoPosition) {
	servo1->Set(servoPosition);
}
