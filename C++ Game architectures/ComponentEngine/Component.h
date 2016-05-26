#pragma once
#include <iostream>
class GameObject;

class Component
{
public:
	virtual void update(GameObject& game_object)
	{
		std::cout << "update: component" << std::endl;
	}
};
