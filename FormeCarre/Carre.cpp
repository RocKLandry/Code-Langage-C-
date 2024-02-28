#include <iostream>
#include "Carre.h"

using namespace std;

double Carre::Perimetre()
{
    double P;
    P=cote*4;
    return P;
}
double Carre::Surface()
{
    double S;
    S=cote*cote;
    return S;
}
void Carre::DefinirCote(double x)
{
    cote=x;
}
void Carre::AfficherCote()
{

    cout<<"Mon cote est : "<<cote<<endl;
}
void Carre::AfficherPerimetre()
{
    cout<<"Mon perimetre est : "<<this->Perimetre()<<endl;
}
void Carre::AfficherSurface()
{
    cout<<"Ma surface est : "<<this->Surface()<<endl;
}
Carre::Carre()
{
    cote=10;
}
Carre::~Carre()
{
    cout<<"Object libere "<<endl;
}
