#ifndef TEST_H
#define TEST_H

#include "reservoir.h"
#include "moteur.h"
#include "vanne.h"
#include "pompe.h"

//Objet contenant tout les objets du systemes

class Test
{
public:
    Test();
    ~Test();
     Reservoir *Tank1,*Tank2,*Tank3;
     Moteur *M1,*M2,*M3;
     Vanne *VT12,*VT23,*V12,*V13,*V23;
     Pompe *P11,*P12,*P21,*P22,*P31,*P32;


};

#endif // TEST_H
