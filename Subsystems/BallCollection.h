#ifndef BALLCOLLECTION_H
#define BALLCOLLECTION_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Mike
 */
class BallCollection: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANJaguar *leftCenterJaguar;
	CANJaguar *rightCenterJaguar;
	
public:
	BallCollection();
	void InitDefaultCommand();
	void SpinLeft(float spinSpeed);
	void SpinRight(float spinSpeed);
};

#endif
