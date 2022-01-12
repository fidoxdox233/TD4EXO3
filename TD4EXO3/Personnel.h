#pragma once
#include"Employe.h"
#include<vector>

class Personnel
{
public:
	Personnel();
	~Personnel();
	float salaire_total()const;
	void ajout(Employe*E);

private:
	vector<Employe*>table;
};
