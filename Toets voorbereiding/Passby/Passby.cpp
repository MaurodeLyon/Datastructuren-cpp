// Passby.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void verwisselByValue(int a, int b)
{
	int kopie = a;
	a = b;
	b = kopie;
}

void verwisselByRefrence(int &a, int &b)
{
	int kopie = a;
	a = b;
	b = kopie;
}


int main()
{
	int getal1, getal2;

	cout << "Getal 1: ";
	cin >> getal1;
	cout << "Getal 2: ";
	cin >> getal2;
	cin.get();

	verwisselByValue(getal1, getal2);
	cout << "verwisselByValue: " << endl;
	cout << getal1 << " en " << getal2 << endl;

	verwisselByRefrence(getal1, getal2);
	cout << "verwisselByRef: " << endl;
	cout << getal1 << " en " << getal2 << endl;
	cin.get();
	return 0;
}

