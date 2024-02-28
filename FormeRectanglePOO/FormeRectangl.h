#ifndef FORMERECTANGL_H_INCLUDED
#define FORMERECTANGL_H_INCLUDED



class Rectangle
{
    private :
        double longueur;
        double largeur;
    public :
        double perimetre();
        double surface();
        void DefinirLongueur(double);
        void DefinirLargeur(double);
        void AfficherLongueur();
        void AfficherLargeur();
        void AfficherPerimetre();
        void AfficherSurface();
        Rectangle();
        ~Rectangle();


};





#endif // FORMERECTANGL_H_INCLUDED
