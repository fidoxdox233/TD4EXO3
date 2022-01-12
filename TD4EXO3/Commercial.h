#pragma once
#include "Employe.h"

class Commercial:public Employe
{
public:
	Commercial(string n,float ind,int inf);
	~Commercial();
	void miseajour(int val);
	float calcul_salaire()const override;
private:
	int infovente;
};

