#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Hello World" << endl;

	const double PI = 3.1415926535;

	char myGrade = 'A';

	bool isHappy = true;

	int myAge = 39;
	int largestInt = 2147483648;

	float favNum = 3.14592;

	double otherfavNum = 1.6180339887;

	short int bit16 = 16;

	long int bit32 = 32;

	long long int bit64 = 64;

	unsigned int notNegativeInt = 0;

	long double notLessThenDouble;

	cout << "Size of int: " << sizeof(myAge) << endl;
	cout << "Favorite Number: " << favNum << endl;
	cout << "Integer overflow: " << largestInt << endl;

	int five = 5;

	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;
	return 0;
}