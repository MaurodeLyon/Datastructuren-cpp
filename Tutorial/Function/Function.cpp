#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0)
{
	int combinedValue = firstNum + secondNum;
	return  combinedValue;
}

int addNumbers(int firstNum, int secondNum, int thirdNum)
{
	return firstNum + secondNum + thirdNum;
}

int getFactorial(int number)
{
	int sum;
	if (number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;
}

int main()
{
	cout << addNumbers(1) << endl;
	cout << addNumbers(1, 5, 6) << endl;
	cout << "The factorial of 3 is " << getFactorial(3) << endl;
	return 0;
}