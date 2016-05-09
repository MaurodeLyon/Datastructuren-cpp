#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void makeMeYoung(int*age)
{
	cout << "I used to be " << *age << endl;
	*age = 18;
}

void actYourAge(int& age)
{
	age = 19;
}

int main()
{
	int myAge = 19;
	char myGrade = 'B';

	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;

	cout << "myAge is locate at " << &myAge << endl;
	cout << endl;
	int *adressMyAge = &myAge;
	cout << "Address of pointer " << adressMyAge << endl;
	cout << "Data at memory address " << *adressMyAge << endl;
	cout << endl;

	int badNums[5] = { 4,13,14,24,34 };
	int * numArrayPtr = badNums;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;
	numArrayPtr++;
	cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

	makeMeYoung(&myAge);
	cout << "I'm " << myAge << " years old now" << endl;
	int& ageRef = myAge;
	cout << "myAge: " << myAge << endl;
	ageRef++;
	cout << "myAge: " << myAge << endl;
	actYourAge(ageRef);
	cout << "myAge: " << myAge << endl;

	return 0;
}