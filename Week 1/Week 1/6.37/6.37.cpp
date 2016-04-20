// 6.37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// Sum Luhn
int getDigit(const char * number)
{
	auto digits = 0;
	int i = strlen(number);
	char digitv = 0;
	while (i--)
	{
		digitv = number[i] - '0';
		digitv <<= !(i % 2);
		digitv -= 9 * (digitv > 9);
		digits += digitv;
	}
	return digits;
}

//sum of double evenplace
int sumOfDoubleEvenPlace()//const std::string& cardNumber)
{
	int sum;
	char* cardnumber = "0123456789101112";
	sum = getDigit(cardnumber);
	std::cout << sum;
	return 0;
}

// Get Luhn Key
char GetLuhnKey(const char * number)
{
	return (10 - getDigit(number) % 10) % 10;
}

// CheckSum Luhn
bool isValid(const char * number)
{
	return (getDigit(number) % 10 == 0);
}

int main()
{
	char* number = "";
	std::cout << "Enter card number:\n";
	//std::cin >> number;
	//std::cout << getDigit(number);
	sumOfDoubleEvenPlace();
	return 0;
}

