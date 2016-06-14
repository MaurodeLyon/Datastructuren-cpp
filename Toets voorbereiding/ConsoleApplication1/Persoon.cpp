#include "stdafx.h"
#include "Persoon.h"

Persoon::Persoon(string naam, int geboorteJaar)
{
	aantalKinderen = 0;
	maxAantalKinderen = 2;
	this->naam = naam;
	this->geboorteJaar = geboorteJaar;
	partner = nullptr;
	kinderen = new string[maxAantalKinderen];
}

Persoon::Persoon(const Persoon& p)
{
	naam = p.naam;
	geboorteJaar = p.geboorteJaar;
	partner = new string();
	partner = p.partner;
	kinderen = new string[p.maxAantalKinderen];
	kinderen = p.kinderen;

	aantalKinderen = p.aantalKinderen;
	maxAantalKinderen = p.maxAantalKinderen;
}

Persoon::~Persoon()
{
	delete partner;
	delete kinderen;
}

void Persoon::wijzigPartner(string *newPartner)
{
	partner = newPartner;
}

void Persoon::voegKindToe(string kind)
{
	if (aantalKinderen > maxAantalKinderen)
	{
		maxAantalKinderen = maxAantalKinderen * 2;
		string * temp = kinderen;
		kinderen = new string[maxAantalKinderen];
		kinderen = temp;
	}
	kinderen[aantalKinderen] = kind;
	aantalKinderen++;
}

void Persoon::operator=(const Persoon& p)
{
	this->naam = p.naam;
	this->geboorteJaar = p.geboorteJaar;
	this->partner = new string();
	this->partner = p.partner;
	this->kinderen = new string[p.maxAantalKinderen];
	this->kinderen = p.kinderen;
	this->aantalKinderen = p.aantalKinderen;
	this->maxAantalKinderen = p.maxAantalKinderen;
}

bool Persoon::operator<(const Persoon& p)
{
	if (this->naam < p.naam)
	{
		return true;
	}
	return false;
}

ostream& operator<<(ostream& os, const Persoon& p)
{
	os << "Naam: " << p.naam << endl;
	os << "Geboortejaar: " << p.geboorteJaar << endl;
	if (p.partner != nullptr) os << "Partner: " << *p.partner << endl;
	if (p.kinderen != nullptr)
	{
		os << "Kinderen: " << p.aantalKinderen << endl;
		for (int i = 0; i < p.aantalKinderen; i++)
		{
			cout << p.kinderen[i] << endl;
		}
	}

	return os;
}
