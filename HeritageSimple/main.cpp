#include <iostream>
#include "Personne.h"
#include "Etudiant.h"
#include "Enseignant.h"

using namespace std;

Personne A;
Etudiant B;
Enseignant C;


int main()
{
    A.Manger(1);
    B.Manger(10);
    C.Manger(5);
    A.Affichernom();
    B.Affichernom();
    C.Affichernom();
    return 0;
}
