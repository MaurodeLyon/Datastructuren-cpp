#pragma once
using namespace std;
class Persoon {

public:
	Persoon(string naam, int geboorteJaar);
	Persoon(const Persoon &p);
	~Persoon();

	void wijzigPartner(string *newPartner);
	void voegKindToe(string kind);

	void operator=(const Persoon& p);
	bool operator<(const Persoon& p);
	friend ostream& operator<<(ostream& os, const Persoon& p);
private:
	string naam;
	int geboorteJaar;
	string *partner;  		// een persoon heeft 0 of 1 partner (naam)
	string *kinderen; 		// een persoon heeft 0 of meer kinderen (namen)
							// De namen van deze kinderen worden in een 
							// dynamische array opgeslagen.
	int aantalKinderen;		// het aantal kinderen van deze persoon
	int maxAantalKinderen;	// de huidige grootte van de 
							// dynamisch array van de namen van kinderen
};

