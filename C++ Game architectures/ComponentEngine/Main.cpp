#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "GameObject.h"
#include "PlayerGraphicsComponent.h"
#include "InputComponent.h"

using namespace std;

int main()
{
	cout << "GameObject 1" << endl;
	GameObject* g = new GameObject();
	g->addComponent(new PlayerGraphicsComponent());
	g->update();

	cout << endl << "GameObject 2" << endl;
	GameObject* g2 = new GameObject();
	g2->addComponent(new InputComponent());
	g2->update();

	cout << endl << "GameObject 3" << endl;
	GameObject* g3 = new GameObject();
	g3->addComponent(new PlayerGraphicsComponent());
	g3->addComponent(new InputComponent());
	g3->update();
	cout << endl;
	return 0;
}