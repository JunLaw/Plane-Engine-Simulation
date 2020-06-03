#ifndef POMPE_H
#define POMPE_H

#include <string>
#include <iostream>
//#include "reservoir.h"

enum etatPompe {ON,OFF,BROKE};

class Reservoir;
class Pompe
{
public:
    Pompe();
    //~Pompe();
    Pompe(bool state,std::string nom);
    Pompe(bool state,std::string nom,Reservoir& r);
    void affiche();
    enum etatPompe getEtat();
    std::string getNom();
    bool getSecours();
    bool isOccupe();
    void setoccupe();
    void disponible();
    Reservoir* getRes();//rentre le reservoir ou le pompe se trouve
    void demarrer();
    void eteindre();
    void casser();
    void setEtat(enum etatPompe state); // ne pas utiliser cette fonction
private:

    enum etatPompe state;
    //vrai : pompe de secours faux sinon
    bool secours;
    bool occupe;
    //nom de la pompe
    std::string nom;
    Reservoir* res;
};

#endif // POMPE_H
