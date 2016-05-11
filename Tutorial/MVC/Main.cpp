// Main : Defines the entry point for the console application.
//

#include "stdafx.h"
extern std::string name;
int main()
{
	std::cout << name << std::endl;
	auto model = Model();
	auto view = View();
	std::cout << name << std::endl;
	return 0;
}

