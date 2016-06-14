// Opdracht 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <fstream>;
#include <iostream>


using namespace std;
void printCollection(int n)
{
	cout << "{}" << endl;


}

void printR(int startNumber, int endNumber)
{
	if (startNumber == endNumber)
	{
		cout << endNumber << endl;
	}
	else if(startNumber < endNumber)
	{
		printR(2, 3);
	}

}


int main()
{
	//recursieve functie om alle deel waardes te splitsen
	//{}
	//{1}
	//{1, 2}
	//{1, 2, 3}
	//{1, 3}
	//{2}
	//{2, 3}
	//{3}

	printCollection(3);


	return 0;
}

