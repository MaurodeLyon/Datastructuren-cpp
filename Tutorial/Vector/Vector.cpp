#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	vector<int> lotteryNumVect(10);
	int lotteryNumArray[5] = { 4,13,14,24,34 };
	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);
	lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);
	cout << lotteryNumVect.at(2) << endl;
	return 0;
}