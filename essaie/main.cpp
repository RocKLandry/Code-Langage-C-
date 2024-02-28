#include <iostream>

using namespace std;

int main()
{
    double *pointeur;// J'ai declaré un pointeur sur un double
    pointeur= new double; // je reserve dynamiquement un espace pour un double en mémoire centrale
    *pointeur=24388890976; // j'affecte une vaaleur à l'emplacement que j'ai reservé
    //  LE POINTEUR RECOIS L'ADRESSE D'UN ESPACE RESERVE QUI PEUT ETRE MEME UN TABLEAU OU UNE VARIABLE SIMPLE
    cout<<pointeur;
    cout<<endl;
    cout<<endl;
    cout<<*pointeur;
    cout<<endl;
    delete pointeur;// je libère l'espace que j'ai reservé



    return 0;
}
