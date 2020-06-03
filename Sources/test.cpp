#include "../Header/test.h"


Test::Test()
{
    this->P11 = new Pompe(false,"P11",*Tank1);
    this->P12 = new Pompe(true,"P12",*Tank1);
    this->P21 = new Pompe(false,"P21",*Tank2);
    this->P22 = new Pompe(true,"P22",*Tank2);
    this->P31 = new Pompe(false,"P31",*Tank3);
    this->P32 = new Pompe(true,"P32",*Tank3);
    this->Tank1 = new Reservoir(1,1000,*this->P11,*this->P12);
    this->Tank2 = new Reservoir(2,800,*P21,*P22);
    this->Tank3 = new Reservoir (3,1000,*P31,*P32);
    this->M1 = new Moteur(1,*Tank1,Tank1->getPompe());
    this->M2 = new Moteur(2,*Tank2,Tank2->getPompe());
    this->M3 = new Moteur(3,*Tank3,Tank3->getPompe());

    this->V12 = new Vanne("VT12");
    this->V13 = new Vanne ("V13");
    this->V23 =new Vanne ("V13");
    this->VT12 = new  Vanne ("V12");
    this->VT23 = new Vanne("VT23");
}

Test::~Test(){
    delete Tank1;
    delete Tank2;
    delete Tank3;
    delete P11;
    delete P12;
    delete P21;
    delete P22;
    delete P31;
    delete P32;
    delete M1;
    delete M2;
    delete M3;
}
