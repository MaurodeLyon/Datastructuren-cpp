// PalinDroom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator>

using namespace std;

int main()
{
	struct info
	{
		int rij;
		int kolom;
		string woord;
	} woord;
	vector<info> woorden;
	char array[12][12];
	int selectedRow = 0;

	//load file
	//fill matrix
	string line;
	ifstream filestream("matrix.txt");
	if (filestream.is_open())
	{
		while (getline(filestream, line))
		{
			cout << line << endl;
			//strcpy(array[selectedRow], line.c_str());
			selectedRow++;
		}
		filestream.close();
	}
	else cout << "unable to open file." << endl;
	//horizontal filter words
	/*for (auto i = 0; i < 12; i++)
	{
		for (auto j = 0; j < 12; j++)
		{
			cout << array[i][j];
		}
		cout << endl;
	}*/
	//vertical filter words
	//sla op in vector<pair<positie,woord>>
	woord.kolom = 1;
	woord.rij = 2;
	woord.woord = "Woord";
	woorden.push_back(woord);
	woorden.push_back(woord);
	woorden.push_back(woord);
	woorden.push_back(woord);
	woorden.push_back(woord);
	//schrijf de vector op in een tekst bestand
	ofstream out("opgeslagenLijst.txt");
	if (out.is_open())
	{
		for each(info w in woorden)
		{
			out << w.kolom << " " << w.rij << " " << w.woord << endl;
		}
	}
	out.close();
	return 0;
}

