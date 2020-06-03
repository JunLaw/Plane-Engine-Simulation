#include "../Header/fenetre.h"
#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "../Header/moteur.h"
#include "../Header/reservoir.h"
#include "../Header/vanne.h"
#include "../Header/test.h"


int main(int argc, char *argv[])
{


    QApplication a(argc,argv);
    Fenetre fen;

    fen.show();


/*
    t1.Tank1.affiche();
    t1.Tank1.activerPompe2();
    t1.Tank1.affiche();
    t1.Tank1.getPompe1().affiche();
    t1.Tank1.activerPompe1();
    t1.Tank1.affiche();
*/

 return a.exec();

}
