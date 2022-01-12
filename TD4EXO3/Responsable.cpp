#include "Responsable.h"
#include <iostream>
using namespace std;
Responsable::Responsable(string n, float indice, string title):Employe(n,indice)
{
	this->titre = title;
	this->subor = vector<Employe*>();
}

void Responsable::addSubor(Employe* E)
{
	this->subor.push_back(E);
}

void Responsable::afficher() const
{
	cout << "le titre du responsable est : "<<this->titre<< endl;
	this->Employe::afficher();
	cout << "Les subordonnes directs et indirects:" << endl;
	for (int i = 0; i < this->subor.size(); i++)
	{
		this->subor[i]->afficher();
	}
}

Responsable::~Responsable()
{
	this->subor.clear();
}
