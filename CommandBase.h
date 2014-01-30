#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/MotorControlSubsystem.h"
#include "Subsystems/ServoSubsystem.h"
#include "Subsystems/BallCollection.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem *examplesubsystem;
	static MotorControlSubsystem *motorControlSubsystem;
	static ServoSubsystem *servoSubsystem;
	static BallCollection *ballCollection;
	static OI *oi;
};

#endif
