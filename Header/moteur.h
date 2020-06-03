#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>
#include <iostream>
#include "pompe.h"
#include "reservoir.h"

class Moteur
{
public:
    Moteur();
   // ~Moteur();
    void affiche();
    Pompe* getPompe();
    Reservoir* getReservoir();
    Moteur(int numeroMoteur,Reservoir &res,Pompe& pompe);
    void setReservoir(Reservoir &res);
    void setPompe(Pompe &p);
    int getnumeroMoteur();
private:
    int numeroMoteur;
    Reservoir *ResAlimenter;
    Pompe* pompe;
};

#endif // MOTEUR_H
