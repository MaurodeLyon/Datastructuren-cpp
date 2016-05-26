#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "GameObject.h"
#include "PlayerGraphicsComponent.h"

using namespace std;

int main()
{
	cout << "Hello Components" << endl;
	GameObject* g = new GameObject();
	g->addComponent(new PlayerGraphicsComponent());
	g->update();
	return 0;
}