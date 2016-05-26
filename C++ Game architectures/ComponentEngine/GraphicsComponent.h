#pragma once
#include "Component.h"

class GraphicsComponent : public Component
{
public:
	virtual void update(GameObject& game_object)
	{
		std::cout << "update: graphics" << std::endl;
	}
};
