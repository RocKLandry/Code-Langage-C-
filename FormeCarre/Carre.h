#ifndef CARRE_H_INCLUDED
#define CARRE_H_INCLUDED

class Carre {
    private :
        double cote;
    public :
        double Perimetre();
        double Surface();
        void DefinirCote(double x);
        void AfficherCote();
        void AfficherPerimetre();
        void AfficherSurface();
        Carre();
        ~Carre();

    };

#endif // CARRE_H_INCLUDED
