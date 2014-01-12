#include "ServoSubsystem.h"
#include "../Robotmap.h"

ServoSubsystem::ServoSubsystem() : Subsystem("ServoSubsystem") {
	servo1 = new Servo(firstservo);
}
    
void ServoSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void ServoSubsystem::Position(float possition) {
}
