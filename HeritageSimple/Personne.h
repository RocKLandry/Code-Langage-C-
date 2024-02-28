#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
class Personne
{ private:
   char Nom[100];
   protected:
   char Prenom[200];
   private:
    int Nourriture;


   public:
    void Manger(int);
    Personne();
    ~Personne();
    void Affichernom();

};



#endif // PERSONNE_H_INCLUDED
