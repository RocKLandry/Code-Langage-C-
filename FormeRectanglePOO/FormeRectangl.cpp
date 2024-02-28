#include<iostream>
#include"FormeRectangl.h"
using namespace std;
void Rectangle::DefinirLongueur(double x)
{
    longueur=x;
}
void Rectangle::DefinirLargeur(double n)
{
    largeur=n;
}
double Rectangle::perimetre()
{
    double p=(longueur+largeur)*2;
    return p;
}
double Rectangle::surface()
{
    double s=longueur*largeur;
    return s;
}
void Rectangle::AfficherLongueur()
{
    cout<<" Ma longueur est : "<<longueur<<endl;
}
void Rectangle::AfficherLargeur()
{
    cout<<" Ma largeur est : "<<largeur<<endl;
}

void Rectangle::AfficherPerimetre()
{
     cout<<" Mon perimetre est : "<<this->perimetre()<<endl;
}
void Rectangle::AfficherSurface()
{
     cout<<" Ma surface est : "<<this->surface()<<endl;
}
Rectangle::Rectangle()
{
    longueur=10;
    largeur=5;
}
Rectangle::~Rectangle()
{
    cout<<" Espace libere merci!"<<endl;
}
