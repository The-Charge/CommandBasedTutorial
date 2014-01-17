#include "WPIlib.h"

/* Some constants that define what buttons on 
 *the Interlink RC style controller
 * map to what. */

const short SwitchLeftDown = 1;
const short SwitchRightForward = 2;
const short ButtonRed = 3;
const short SwitchTopLeftBack = 4;
const short SwitchTopLeftForward = 5;


const short RightXAxis = 1;			// Aliron
const short RightYAxis = 2;			// Elevator
const short LeftYAxis = 3;			// Throttle
const short RightPotAxis = 4;		//
const short LeftXAxis = 5;			// Rudder




class Interlink
{
private: Joystick *m_Interlink;
	
	public: Interlink(int port)
	{
		/* Makes an instance of a new joystick that our
		 * Interlink controller will use. Is in USB port 1.
		 * Has 5 axiseses and has 5 buttons  */
		 
		m_Interlink = new Joystick(port,5,5);
	}
	
	public: bool GetRawButton(int button)
	{
		/*Gets the raw button state from the joystick class.
		true is press, false is unpressified */
		return m_Interlink->GetRawButton(button);
	}
	
	
	/* Easy functions to call to get the value of stuff. */
	public: bool GetLeftDown() { return GetRawButton(1); }
	public: bool GetRightForward() { return GetRawButton(2); }
	public: bool GetRed() { return GetRawButton(3); }
	public: bool GetTopLeftBack() { return GetRawButton(4); }
	public: bool GetTopLeftForward() { return GetRawButton(5); }

	// (0,1] is right, [-1,0) is left. Range [-1,1]
	public: float GetRightX() { return GetAxis(1); }
	// (0,1] is down, [-1,0) is up. Range [-1,1] 
	public: float GetRightY() { return GetAxis(2); }
		// (0,1] is down, [-1,0) is up. Range [-1,1] 
	public: float GetLeftY() { return GetAxis(3); }	
		// (0,1] is down, [-1,0) is up. Range [-1,1] 
	public: float GetRightPot() { return GetAxis(4); }	
	// (0,1] is right, [-1,0) is left. Range [-1,1]
	public: float GetLeftX() { return GetAxis(5); } 
	
	public: float GetAxis(int axis)
	{
		/*get the axis state from the joystick class
		negative on x is left, positive is right
		negative on y is up, positive is down */
		return m_Interlink->GetRawAxis(axis);
	}
	

};
