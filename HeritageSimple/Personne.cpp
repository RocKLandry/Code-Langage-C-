#include <iostream>
#include "Personne.h"
#include <cstring>
using namespace std;

void Personne::Manger(int x)
{
    Nourriture=x;
}
Personne::Personne()
{
    strcpy(Nom,"Le Nom");
    strcpy(Prenom,"Les Prenoms");
    Nourriture=0;
}

Personne::~Personne()
{
    cout<<"Une Personne vient de Partir."<<endl;
}
void Personne::Affichernom()
{
    cout<<"Mon nom est : "<<this->Nom<<endl;
}
