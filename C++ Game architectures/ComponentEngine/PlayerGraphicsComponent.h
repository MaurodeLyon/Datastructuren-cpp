#pragma once
#include "GraphicsComponent.h"

class PlayerGraphicsComponent : public GraphicsComponent
{
public:
	virtual void update(GameObject& game_object)
	{
		std::cout << "update: player Graphics" << std::endl;
	}
};
