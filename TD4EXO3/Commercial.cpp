#include "Commercial.h"
#include<iostream>
using namespace std;

Commercial::Commercial(string n, float ind, int inf):Employe(n,ind)
{
	this->infovente = inf;
}

Commercial::~Commercial()
{
	cout << "destructeur commercial" << endl;
}

void Commercial::miseajour(int val)
{
	this->infovente = val;
}

float Commercial::calcul_salaire() const
{
	return this->Employe::calcul_salaire()+this->infovente;
}

