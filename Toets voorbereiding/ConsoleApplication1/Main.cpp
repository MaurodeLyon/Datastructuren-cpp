// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Persoon * persoon = new Persoon("Henk", 2);
	persoon->wijzigPartner(new string("Betty"));
	persoon->voegKindToe("Harry");
	persoon->voegKindToe("Harry");
	persoon->voegKindToe("Harry");
	persoon->voegKindToe("Harry");
	persoon->voegKindToe("Bert");
	persoon->voegKindToe("Bert");
	persoon->voegKindToe("Bert");

	cout << *persoon << endl;

	return 0;
}

