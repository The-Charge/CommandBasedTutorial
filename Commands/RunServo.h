#ifndef RUNSERVO_H
#define RUNSERVO_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class RunServo: public CommandBase {
public:
	RunServo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
