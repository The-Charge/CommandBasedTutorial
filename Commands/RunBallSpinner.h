#ifndef RUNBALLSPINNER_H
#define RUNBALLSPINNER_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class RunBallSpinner: public CommandBase {
public:
	RunBallSpinner();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
