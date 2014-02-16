#ifndef SHIFTERHIGH_H
#define SHIFTERHIGH_H

#include "../CommandBase.h"

/**
 *
 *
 * @author Mike
 */
class ShifterHigh: public CommandBase {
public:
	ShifterHigh();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
