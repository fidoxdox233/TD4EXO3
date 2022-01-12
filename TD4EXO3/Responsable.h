#pragma once
#include "Employe.h"
#include <iostream>
#include <vector>
using namespace std;
class Responsable :public Employe
{
public:
	Responsable(string n, float indice,string title);
	void addSubor(Employe *E);
	void afficher()const override;
	~Responsable();

private:
	string titre;
	vector <Employe*> subor;
};

