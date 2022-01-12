#include "Personnel.h"
Personnel::Personnel()
{
    this->table = vector<Employe*>();
}
Personnel::~Personnel()
{
    this->table.clear();
}
float Personnel::salaire_total() const
{
    float tot=0;
    for (int i = 0; i < this->table.size(); i++)
    {
        tot += this->table[i]->calcul_salaire();

    }
    return tot;
}
void Personnel::ajout(Employe* E)
{
    this->table.push_back(E);
}


