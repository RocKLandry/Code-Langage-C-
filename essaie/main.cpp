#include <iostream>

using namespace std;

int main()
{
    double *pointeur;// J'ai declar� un pointeur sur un double
    pointeur= new double; // je reserve dynamiquement un espace pour un double en m�moire centrale
    *pointeur=24388890976; // j'affecte une vaaleur � l'emplacement que j'ai reserv�
    //  LE POINTEUR RECOIS L'ADRESSE D'UN ESPACE RESERVE QUI PEUT ETRE MEME UN TABLEAU OU UNE VARIABLE SIMPLE
    cout<<pointeur;
    cout<<endl;
    cout<<endl;
    cout<<*pointeur;
    cout<<endl;
    delete pointeur;// je lib�re l'espace que j'ai reserv�



    return 0;
}
