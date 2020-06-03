#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>
#include <stdio.h>
#include <iostream>
#include "pompe.h"


enum etatReservoir {FULL,EMPTY};

class Reservoir
{
public:
    Reservoir();
    Reservoir(int num,int cap,Pompe& pompe1,Pompe& pompe2);
    void affiche(); // affiche les infos principales
    etatReservoir getEtat(); // Renvoie l'etat du reservoir
    int getCapacite();
    int getCapmax();
    int getNumero();
    void setCapacite(int cap);
    Pompe& getPompe(); //Renvoie une reference sur la pompe active (mode ON)
    void usePompe(int i); //Fonction inutile
    Pompe& getPompe1(); //Renvoie une reference sur la pompe 1 (la pompe est modifiable directement)
    Pompe& getPompe2(); //Renvoie une reference sur la pompe 2 (la pompe est modifiable directement)
    void activerPompe1(); // Active la pompe principale en desactivant la secondaire
    void activerPompe2(); // Active la pompe secondaire en desactivant la principale
    void onp1(); // Active la pompe principale
    void onp2(); // Active la pompe secondaire
    void offp1(); //Desactive la pompe principale
    void offp2(); // Desactive la pompe secondaire
    void Vider(); // Vide la pompe capacite = 0
    void Remplir(); // Remplis la pompe au maximum (capmax)
     void setEtat(enum etatReservoir state);
private:


    enum etatReservoir etat;
    //capacité actuel du reservoir
    int capacite;
    int numero;
    int capmax; //capacité maximum du reservoir donné à l'initialisation : Remplir permet de mettre la capacité à ce maximum
    //Pompe principal
    Pompe pompe1;
    //pompe de secours
    Pompe pompe2;


};

#endif // RESERVOIR_H
