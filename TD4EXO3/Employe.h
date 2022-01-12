#pragma once
#include<iostream>
using namespace std;
class Employe
{
public:
	virtual void afficher()const;
	virtual float calcul_salaire()const;
	Employe(string n, float indice);
	~Employe();

private:
	string nom;
	const int matricule;
	static int count;
	float ind_sal;
	static float augmentation;
};

