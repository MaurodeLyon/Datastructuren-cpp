#pragma once
#include "Component.h"

class InputComponent : public Component
{
public:
	virtual void update(GameObject& obj)
	{
		std::cout << "update: input" << std::endl;
	}
};
