#include <iostream>
#include "Carre.h"

using namespace std;

int main()
{
    Carre A;
    Carre B;
    Carre C;
    Carre D;
    A.DefinirCote(5);
    B.DefinirCote(12);
    C.DefinirCote(8.5);
    A.AfficherCote();
    A.AfficherPerimetre();
    A.AfficherSurface();
    B.AfficherCote();
    B.AfficherPerimetre();
    B.AfficherSurface();
    C.AfficherCote();
    C.AfficherPerimetre();
    C.AfficherSurface();
    D.AfficherCote();
    D.AfficherPerimetre();
    D.AfficherSurface();


    return 0;
}
