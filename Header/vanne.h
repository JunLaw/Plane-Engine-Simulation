#ifndef VANNE_H
#define VANNE_H

#include <string>
#include <iostream>

enum etatVanne {OPEN,CLOSE};



class Vanne
{
public:
    Vanne();
    Vanne(std::string nom);
    void affiche();
    enum etatVanne getEtat();
    std::string getNom();
    void ouvrir();
    void fermer();
private:
    void setEtat(enum etatVanne state);
    enum etatVanne etat;
    std::string nom;

};

#endif // VANNE_H
