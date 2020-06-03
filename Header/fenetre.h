#ifndef FENETRE_H
#define FENETRE_H


#include <QWidget>
#include <QPushButton>
#include <QString>
#include <QLabel>
#include "test.h"
#include <stdlib.h>
#include <time.h>
#include <QObject>
#include <QInputDialog>
#include <fstream>
#include <iostream>

/*Gestion de la fenetre */

class Fenetre : public QWidget
{
    Q_OBJECT

public:
    Fenetre();
    //~Fenetre();
    //Fonction de verification de la validité du système : renvoie vrai si le système est totalement operationnel faux si il existe au moins une defaillance
    bool check();
    bool checkM1();//verifir si M1 peut fonctione bien ou pas
    bool checkM2();
    bool checkM3();
    void checkVT();
    void checkTank();
    void alimenter();
    std::string getUsers();
    void subUsers(std::string user);

 public slots:
    //Fonction d'ouverture/fermeture de vanne et de pompe : pas besoin de modifier
    void ouvrirVT12();
    void ouvrirVT23();
    void ouvrirP12();
    void ouvrirP22();
    void ouvrirP32();
    void ouvrirV12();
    void ouvrirV23();
    void ouvrirV13();
    void evaluate();

    //Fonction pour creer une panne aléatoire
    void panne();
    //Fonction pour vider un reservoir de manière aleatoire
    void vidange();



private:
    //button
    QPushButton* b1,*b2,*b3,*b4,*b5,*b6,*b7,*b8,*b9,*b10;
    //Objet contenant Le système entier : 3 moteur, 5 vanne,3 reservoir exemple : utiliser tank1 = t1->Tank1.*une fonction*
    Test *t1;
    //champ de texte
    QLabel *p12,*p22,*p32,*p11,*p21,*p31,*vt12,*vt23,*v12,*v23,*v13,*tank1,*tank2,*tank3,*cap1,*cap2,*cap3,*m1,*m2,*m3,*state;

};

#endif // FENETRE_H
