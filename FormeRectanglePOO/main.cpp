#include <iostream>
#include "FormeRectangl.h"
using namespace std;
int main()
{
    Rectangle A;
    Rectangle B;

    A.DefinirLongueur(8);
    A.DefinirLargeur(4);

    B.DefinirLongueur(40);
    B.DefinirLargeur(20);

    A.AfficherLongueur();
    A.AfficherLargeur();
    A.AfficherPerimetre();
    A.AfficherSurface();

    B.AfficherLongueur();
    B.AfficherLargeur();
    B.AfficherPerimetre();
    B.AfficherSurface();



   return 0;
}
