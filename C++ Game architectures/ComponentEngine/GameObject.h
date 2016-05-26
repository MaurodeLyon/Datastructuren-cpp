#pragma once
#include "Component.h"
#include <vector>
class GameObject
{
public:
	int velocity;
	int x, y;

	GameObject(){}

	void addComponent(Component* component)
	{
		components.push_back(component);
	};

	void update()
	{
		for each(Component* c in components)
		{
			c->update(*this);
		}
	}
private:
	std::vector<Component*> components;
};