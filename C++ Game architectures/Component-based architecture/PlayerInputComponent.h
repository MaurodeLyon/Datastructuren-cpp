#pragma once
#include "stdafx.h"

class PlayerInputComponent : public InputComponent
{
public:
	/*virtual void update(Entity& entity)
	{
		/*switch (Controller::getJoystickDirection())
		{
		case DIR_LEFT:
			bjorn.velocity -= WALK_ACCELERATION;
			break;

		case DIR_RIGHT:
			bjorn.velocity += WALK_ACCELERATION;
			break;
		}*/
	//}

private:
	static const int WALK_ACCELERATION = 1;
};