#include <iostream>
#include "Employe.h"
#include"Responsable.h"
#include"Personnel.h"
#include"Commercial.h"
int main()
{
    Personnel* P = new Personnel();
    Commercial* C1 = new Commercial("com1", 15, 80);
    P->ajout(C1);
    Commercial* C2 = new Commercial("com2", 15, 100);
    P->ajout(C2);
    Commercial* C3 = new Commercial("com3", 15, 160);
    P->ajout(C3);
    Employe* E1 = new Employe("em1", 20);
    P->ajout(E1);
    Employe* E2 = new Employe("em2", 25);
    P->ajout(E2);
    Employe* E3 = new Employe("em3", 25);
    P->ajout(E3);
    Responsable* ceo = new Responsable("Res1", 30, "Ceo");
    P->ajout(ceo);
    Responsable* chef_equipe = new Responsable("chef_aquipe", 29, "chef_equipe");
    P->ajout(chef_equipe);
    Responsable* chef_site = new Responsable("chef_site", 28, "chef_site");
    P->ajout(chef_site);
    chef_site->addSubor(E3);
    chef_equipe->addSubor(chef_site);
    ceo->addSubor(chef_equipe);
    ceo->addSubor(E1);
    ceo->addSubor(C1);
    ceo->addSubor(C2);
    ceo->addSubor(C3);
    ceo->afficher(); 
    cout << endl;
    cout << endl;

    cout << "Le salaire total du personnel est:" << P->salaire_total() << endl;
  
}
