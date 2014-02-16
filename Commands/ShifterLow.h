#ifndef SHIFTERLOW_H
#define SHIFTERLOW_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class ShifterLow: public CommandBase {
public:
	ShifterLow();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
