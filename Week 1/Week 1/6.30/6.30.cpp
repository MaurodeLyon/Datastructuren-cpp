
#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions

using namespace std;

void search(string& s, char& key)
{
	// different member versions of find in the same order as above:
	std::size_t found = s.find(key);
	if (found != std::string::npos) {
		std::cout << "first '" << key << "' found at: " << found << '\n';
		cout << "String: " << s << "\n";
	}
}

int main()
{
	string searchString;
	char key;

	cout << "-----Search string for key-----\n";
	cout << "Enter a string:\n";
	cin >> searchString;
	cout << "Enter a character\n";
	cin >> key;
	cout << "input \tstring: " << searchString << " \tkey: " << key << "\n";
	search(searchString, key);

	return 0;
}