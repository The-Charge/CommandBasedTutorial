#ifndef CENTERSERVO_H
#define CENTERSERVO_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class CenterServo: public CommandBase {
public:
	CenterServo();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
