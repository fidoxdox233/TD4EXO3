#include "Employe.h"
int Employe::count = 0;
float Employe::augmentation = 7;

Employe::Employe(string n, float indice) :matricule(++Employe::count)
{
    this->nom = n;
    this->ind_sal = indice;
}
void Employe::afficher() const
{
    cout << "le matricule :" << this->matricule<<endl;
    cout << "le nom :" << this->nom<<endl;
    cout << "l'indice salarial:" << this->ind_sal << endl;
}

float Employe::calcul_salaire() const
{
    return this->ind_sal * Employe::augmentation;
}


Employe::~Employe()
{
    cout << "destructeur classe employe" << endl;
}
