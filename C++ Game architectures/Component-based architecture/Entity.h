#pragma once
#include "stdafx.h"

//http://gameprogrammingpatterns.com/component.html
/*class Entity
{
public:
	int velocity;
	int x, y;

	Entity(InputComponent* input,PhysicsComponent* physics,GraphicsComponent* graphics)
		: input_(input),physics_(physics),graphics_(graphics){}

	void update(World& world, Graphics& graphics)
	{
		input_->update(*this);
		physics_->update(*this, world);
		graphics_->update(*this, graphics);
	}

	Entity createEntity()
	{
		return new Entity(
			new PlayerInputComponent(), 
			new PhysicsComponent(), 
			new GraphicsComponent());
	}
private:
	InputComponent* input_;
	PhysicsComponent* physics_;
	GraphicsComponent* graphics_;
};
*/
