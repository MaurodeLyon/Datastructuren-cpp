#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	cout << "Number guesser" << endl;

	string numberGuessed;
	int intNumberGuessed;
	int randomNumber = (rand() % 10 ) + 1;
	do
	{
		cout << "Guess between 1 and 10: ";
		getline(cin, numberGuessed);
		intNumberGuessed = stoi(numberGuessed);
		cout << intNumberGuessed << endl;

	} while (intNumberGuessed != randomNumber);

	cout << "good guess the number was: " << randomNumber << endl;

	return 0;
}