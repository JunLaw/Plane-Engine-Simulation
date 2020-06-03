#include "../Header/fenetre.h"

using namespace  std;


/**
 * @brief Affichage de l'application
 * @caption
 */
Fenetre::Fenetre() : QWidget() //Definition de la fenetre Ajout des boutton, de l'interface de description d'etat; des connexion boutton
{
    setFixedSize(1300,600);
    string user = getUsers();
    subUsers(user);
    b1 = new QPushButton("VT12",this);
    b2 = new QPushButton("VT23",this);
    b3 = new QPushButton("P12",this);
    b4 = new QPushButton("P22",this);
    b5 = new QPushButton("P32",this);
    b6 = new QPushButton("V12",this);
    b7 = new QPushButton("V23",this);
    b8 = new QPushButton("V13",this);
    b9 = new QPushButton("Panne",this);
    b10 = new QPushButton("Vidange",this);
    b1->setGeometry(70,50,170,120);
    b2->setGeometry(340,50,170,120);
    b3->setGeometry(35,230,170,120);
    b4->setGeometry(220,230,170,120);
    b5->setGeometry(400,230,170,120);
    b6->setGeometry(35,400,170,120);
    b7->setGeometry(220,400,170,120);
    b8->setGeometry(400,400,170,120);
    b9->setGeometry(625,50,170,120);
    b10->setGeometry(625,200,170,120);
    t1 = new Test();
    QLabel  *pompe12 = new QLabel("P12 : ",this);
    QLabel  *pompe22 = new QLabel("P22 : ",this);
    QLabel  *pompe32 = new QLabel("P32 : ",this);
    QLabel  *pompe11 = new QLabel("P11 : ",this);
    QLabel  *pompe21 = new QLabel("P21 : ",this);
    QLabel  *pompe31 = new QLabel("P31 : ",this);
    pompe12->setGeometry(890,50,70,50);
    pompe22->setGeometry(890,70,70,50);
    pompe32->setGeometry(890,90,70,50);
    pompe11->setGeometry(990,50,70,50);
    pompe21->setGeometry(990,70,70,50);
    pompe31->setGeometry(990,90,70,50);
    p12 = new QLabel("OFF",this);
    p22 = new QLabel("OFF",this);
    p32 = new QLabel("OFF",this);
    p11 = new QLabel("ON",this);
    p21 = new QLabel("ON",this);
    p31 = new QLabel("ON",this);
    p12->setGeometry(930,50,70,50);
    p22->setGeometry(930,70,70,50);
    p32->setGeometry(930,90,70,50);
    p11->setGeometry(1030,50,70,50);
    p21->setGeometry(1030,70,70,50);
    p31->setGeometry(1030,90,70,50);

    QLabel  *vanneT12 = new QLabel("VT12 : ",this);
    QLabel  *vanneT23 = new QLabel("VT23 : ",this);
    QLabel  *vanne12 = new QLabel("V12 : ",this);
    QLabel  *vanne23 = new QLabel("V23 : ",this);
    QLabel  *vanne13 = new QLabel("V13 : ",this);

    vanneT12->setGeometry(890,110,70,50);
    vanneT23->setGeometry(890,130,70,50);
    vanne12->setGeometry(990,110,70,50);
    vanne23->setGeometry(990,130,70,50);
    vanne13->setGeometry(890,150,70,50);

    vt12 = new QLabel("OPEN",this);
    vt23 = new QLabel("OPEN",this);
    v13 = new QLabel("OPEN",this);
    v12 = new QLabel("OPEN",this);
    v23 = new QLabel("OPEN",this);

    vt12->setGeometry(935,110,70,50);
    vt23->setGeometry(935,130,70,50);
    v12->setGeometry(1025,110,70,50);
    v23->setGeometry(1025,130,70,50);
    v13->setGeometry(935,150,70,50);

    QLabel *Tank1 = new QLabel("RESERVOIR 1 : ",this);
    QLabel *Tank2 = new QLabel("RESERVOIR 2 : ",this);
    QLabel *Tank3 = new QLabel("RESERVOIR 3 : ",this);

    Tank1->setGeometry(890,170,90,50);
    Tank2->setGeometry(890,190,90,50);
    Tank3->setGeometry(890,210,90,50);

    tank1 = new QLabel("FULL",this);
    tank2 = new QLabel("FULL",this);
    tank3 = new QLabel("FULL",this);

    tank1->setGeometry(980,170,90,50);
    tank2->setGeometry(980,190,90,50);
    tank3->setGeometry(980,210,90,50);

    QLabel *tankcap1 = new QLabel("CAPACITÉ : ",this);
    QLabel *tankcap2 = new QLabel("CAPACITÉ : ",this);
    QLabel *tankcap3 = new QLabel("CAPACITÉ : ",this);

    tankcap1->setGeometry(1030,170,90,50);
    tankcap2->setGeometry(1030,190,90,50);
    tankcap3->setGeometry(1030,210,90,50);

     cap1 = new QLabel(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())),this);
     cap2 = new QLabel(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())),this);
     cap3 = new QLabel(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())),this);

    cap1->setGeometry(1100,170,50,50);
    cap2->setGeometry(1100,190,50,50);
    cap3->setGeometry(1100,210,50,50);

    QLabel *moteur1 = new QLabel("MOTEUR 1 ; POMPE RELIÉ : ",this);
    QLabel *moteur2 = new QLabel("MOTEUR 2 ; POMPE RELIÉ : ",this);
    QLabel *moteur3 = new QLabel("MOTEUR 3 ; POMPE RELIÉ : ",this);

    moteur1->setGeometry(890,240,190,50);
    moteur2->setGeometry(890,270,190,50);
    moteur3->setGeometry(890,300,190,50);

    m1 = new QLabel("P11",this);
    m2 = new QLabel("P21",this);
    m3 = new QLabel("P31",this);

    m1->setGeometry(1070,240,190,50);
    m2->setGeometry(1070,270,190,50);
    m3->setGeometry(1070,300,190,50);

    QLabel *title = new QLabel("ETAT DU SYSTEME : ",this);

    title->setGeometry(920,10,140,50);

    state = new QLabel("RUNNING",this);

    state->setGeometry(1050,10,140,50);

    QPushButton *stop = new QPushButton("TERMINER", this );

    stop->setGeometry(625,350,170,120);

    QObject::connect(stop,SIGNAL(clicked()),this,SLOT(evaluate()));
    QObject::connect(b1,SIGNAL(clicked()),this,SLOT(ouvrirVT12()));
    QObject::connect(b2,SIGNAL(clicked()),this,SLOT(ouvrirVT23()));
    QObject::connect(b3,SIGNAL(clicked()),this,SLOT(ouvrirP12()));
    QObject::connect(b4,SIGNAL(clicked()),this,SLOT(ouvrirP22()));
    QObject::connect(b5,SIGNAL(clicked()),this,SLOT(ouvrirP32()));
    QObject::connect(b6,SIGNAL(clicked()),this,SLOT(ouvrirV12()));
    QObject::connect(b7,SIGNAL(clicked()),this,SLOT(ouvrirV23()));
    QObject::connect(b8,SIGNAL(clicked()),this,SLOT(ouvrirV13()));
    QObject::connect(b9,SIGNAL(clicked()),this,SLOT(panne()));
    QObject::connect(b10,SIGNAL(clicked()),this,SLOT(vidange()));



}

//LA VERIFICATION DES VANNES ENTRE LES RESERVOIRS ET EQUILIBRER LE NIVEAU DE CARBURANT

/**
 * @brief Interaction des Vannes Inter reservoir
 */
void Fenetre::checkVT(){
    if(t1->VT12->getEtat() == CLOSE && t1->VT23->getEtat() == OPEN ){
            double cap =(t1->Tank2->getCapacite() + t1->Tank1->getCapacite())/2.0;
            if(cap <= t1->Tank2->getCapmax()){
                t1->Tank1->setCapacite(cap);
                t1->Tank2->setCapacite(cap);
                cap1->setText(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                if(t1->Tank1->getCapacite() != 0){
                tank1->setText("FULL");
                t1->Tank1->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }
            }else{
                t1->Tank2->Remplir();
                t1->Tank1->setCapacite(cap*2.0 - t1->Tank2->getCapmax());

                cap1->setText(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                if(t1->Tank1->getCapacite() != 0){
                tank1->setText("FULL");
                t1->Tank1->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }

            }

    }else if(t1->VT12->getEtat() == OPEN && t1->VT23->getEtat() == CLOSE ){
            double cap =(t1->Tank2->getCapacite() + t1->Tank3->getCapacite())/2.0;
            if(cap <= t1->Tank2->getCapmax()){
                t1->Tank3->setCapacite(cap);
                t1->Tank2->setCapacite(cap);

                cap3->setText(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                if(t1->Tank3->getCapacite() != 0){
                tank3->setText("FULL");
                t1->Tank3->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }
            }else{
                t1->Tank2->Remplir();
                t1->Tank3->setCapacite(cap*2.0 - t1->Tank2->getCapmax());
                cap3->setText(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                if(t1->Tank3->getCapacite() != 0){
                tank3->setText("FULL");
                t1->Tank3->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }

            }
    }else if(t1->VT12->getEtat() == CLOSE && t1->VT23->getEtat() == CLOSE ){
            double cap =(t1->Tank1->getCapacite() + t1->Tank2->getCapacite() + t1->Tank3->getCapacite())/3.0;
            if(cap <= t1->Tank2->getCapmax()){
                t1->Tank1->setCapacite(cap);
                t1->Tank2->setCapacite(cap);
                t1->Tank3->setCapacite(cap);
                cap1->setText(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                cap3->setText(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())));
                if(t1->Tank3->getCapacite() != 0){
                tank3->setText("FULL");
                t1->Tank3->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }
                if(t1->Tank1->getCapacite() != 0){
                tank1->setText("FULL");
                t1->Tank1->setEtat(FULL);
                }


            }else{
                t1->Tank2->Remplir();
                cap = (cap*3.0 - t1->Tank2->getCapmax())/2.0;
                t1->Tank1->setCapacite(cap);
                t1->Tank3->setCapacite(cap);
                cap1->setText(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())));
                cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
                cap3->setText(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())));
                if(t1->Tank3->getCapacite() != 0){
                tank3->setText("FULL");
                t1->Tank3->setEtat(FULL);
                }
                if(t1->Tank2->getCapacite() != 0){
                tank2->setText("FULL");
                t1->Tank2->setEtat(FULL);
                }
                if(t1->Tank1->getCapacite() != 0){
                tank1->setText("FULL");
                t1->Tank1->setEtat(FULL);
                }

            }

    }
}

//LA VERIFICATION DES RESERVOIRS

/**
 * @brief Verification des Reservoir
 */
void Fenetre::checkTank(){
    if(t1->Tank1->getCapacite() == 0){
        t1->Tank1->Vider();
    }else if(t1->Tank1->getCapacite() == t1->Tank1->getCapmax()){
        t1->Tank1->Remplir();
    }

    if(t1->Tank2->getCapacite() == 0){
        t1->Tank2->Vider();
    }else if(t1->Tank2->getCapacite() == t1->Tank2->getCapmax()){
        t1->Tank2->Remplir();
    }

    if(t1->Tank3->getCapacite() == 0){
        t1->Tank3->Vider();
    }else if(t1->Tank3->getCapacite() == t1->Tank3->getCapmax()){
        t1->Tank3->Remplir();
    }

}

//LA VERIFICATION DES RESERVOIRS

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirVT12(){

    if(t1->VT12->getEtat() == CLOSE){
    t1->VT12->ouvrir();
    vt12->setText("OPEN");

    }else{
        t1->VT12->fermer();
        vt12->setText("CLOSE");
    }
    this->checkVT();
    alimenter();
    t1->VT12->affiche();
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirP12(){
    if(t1->Tank1->getPompe2().getEtat() != BROKE){
    if(t1->Tank1->getPompe2().getEtat() == ON){
        t1->Tank1->offp2();
        p12->setText("OFF");
        alimenter();
    }else if(t1->Tank1->getPompe2().getEtat() == OFF){
        t1->Tank1->onp2();
        p12->setText("ON");
        alimenter();
    }else{
        t1->Tank1->getPompe2().affiche();
    }
    t1->Tank1->getPompe2().affiche();
    }
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirP22(){
    if(t1->Tank2->getPompe2().getEtat() != BROKE){
    if(t1->Tank2->getPompe2().getEtat() == ON){
        t1->Tank2->offp2();
        p22->setText("OFF");
        alimenter();
    }else if(t1->Tank2->getPompe2().getEtat() == OFF){
        t1->Tank2->onp2();
        p22->setText("ON");
        alimenter();
    }else{
        t1->Tank2->getPompe2().affiche();
    }
    t1->Tank2->getPompe2().affiche();
    }
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirP32(){
    if(t1->Tank3->getPompe2().getEtat() != BROKE){
    if(t1->Tank3->getPompe2().getEtat() == ON){
        t1->Tank3->offp2();
        p32->setText("OFF");
        alimenter();
    }else if(t1->Tank3->getPompe2().getEtat() == OFF){
        t1->Tank3->onp2();
        p32->setText("ON");
        alimenter();
    }else{
        t1->Tank3->getPompe2().affiche();
    }
    t1->Tank3->getPompe2().affiche();
    }
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirVT23(){
    if(t1->VT23->getEtat() == CLOSE){
    t1->VT23->ouvrir();
    vt23->setText("OPEN");

    }else{
        t1->VT23->fermer();
        vt23->setText("CLOSE");

    }
    this->checkVT();
    alimenter();
    t1->VT23->affiche();
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirV12(){
    if(t1->V12->getEtat() == CLOSE){
    t1->V12->ouvrir();
    v12->setText("OPEN");
     this->alimenter();
    }else{
        t1->V12->fermer();
        v12->setText("CLOSE");
         this->alimenter();
    }
    t1->V12->affiche();
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirV13(){
    if(t1->V13->getEtat() == CLOSE){
    t1->V13->ouvrir();
    v13->setText("OPEN");
     this->alimenter();

    }else{
        t1->V13->fermer();
        v13->setText("CLOSE");
         this->alimenter();

    }
    t1->V13->affiche();
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Ouverture Fermeture Des vannes
 */
void Fenetre::ouvrirV23(){
    if(t1->V23->getEtat() == CLOSE){
    t1->V23->ouvrir();
    v23->setText("OPEN");
     this->alimenter();

    }else{
        t1->V23->fermer();
        v23->setText("CLOSE");
         this->alimenter();

    }
    t1->V23->affiche();
    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }
}

/**
 * @brief Activation d'une Panne aléatoire
 */
void Fenetre::panne(){
    srand(time(NULL));
    //int numero_pompe_panne = rand()%6;
    //int nbr_pompe_panne = rand()%2 +1;
   // std::cout << nbr_pompe_panne;
    //for(int i = 0;i< nbr_pompe_panne ;i++){
       int numero_pompe_panne = rand()%9 +1;

        switch (numero_pompe_panne) {
            case 1:
            t1->Tank1->getPompe1().casser();
            p11->setText("BROKEN");
            t1->Tank1->affiche();
            break;
        case 2:
            t1->Tank2->getPompe1().casser();
            p21->setText("BROKEN");
            t1->Tank2->affiche();
            break;
        case 3:
            t1->Tank3->getPompe1().casser();
            p31->setText("BROKEN");
            t1->Tank3->affiche();
            break;

        case 4:
            t1->Tank1->getPompe1().casser();
            p11->setText("BROKEN");
            t1->Tank1->affiche();
            break;
        case 5:
            t1->Tank2->getPompe1().casser();
            p21->setText("BROKEN");
            t1->Tank2->affiche();
            break;
        case 6:
            t1->Tank3->getPompe1().casser();
            p31->setText("BROKEN");
            t1->Tank3->affiche();
            break;
        case 7:
            t1->Tank1->getPompe1().casser();
            p11->setText("BROKEN");
            t1->Tank1->affiche();
            t1->Tank1->getPompe2().casser();
            p12->setText("BROKEN");
            t1->Tank1->getPompe2().affiche();
            break;
        case 8:
            t1->Tank2->getPompe1().casser();
            p21->setText("BROKEN");
            t1->Tank2->affiche();
            t1->Tank2->getPompe2().casser();
            p22->setText("BROKEN");
            t1->Tank2->getPompe2().affiche();
            break;
        case 9:
            t1->Tank3->getPompe1().casser();
            p31->setText("BROKEN");
            t1->Tank3->affiche();
            t1->Tank3->getPompe2().casser();
            p32->setText("BROKEN");
            t1->Tank3->getPompe2().affiche();
            break;
        default:
            break;


        }

    //}

    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }

}


/**
 * @brief Activation d'une vidange aléatoire
 */
void Fenetre::vidange(){
    srand(time(NULL));
    int nbr_vidange = rand()%3 +1;
    for(int i = 1;i<nbr_vidange;i++){
        int numero_tank_panne = rand()%3 +1;
        switch (numero_tank_panne){
    case 1:
    t1->Tank1->Vider();
    tank1->setText("EMPTY");
    cap1->setText(QString::fromStdString(std::to_string(t1->Tank1->getCapacite())));
    t1->Tank1->affiche();
            break;
        case 2:
    t1->Tank2->Vider();
    tank2->setText("EMPTY");
    cap2->setText(QString::fromStdString(std::to_string(t1->Tank2->getCapacite())));
    t1->Tank2->affiche();
            break;
        case 3:

    t1->Tank3->Vider();
    tank3->setText("EMPTY");
    cap3->setText(QString::fromStdString(std::to_string(t1->Tank3->getCapacite())));
    t1->Tank3->affiche();
            break;
        default:
            break;
        }
    }

    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }

}


/**
 * @brief Verification du fonctionnement du système globales
 */
bool Fenetre::check(){
    //SI RESERVOIRS VIDE
    checkTank();
   return checkM1() && checkM2() && checkM3();
}

// LEA ALIMENTATIONS DES MOTEURS

/**
 * @brief Gestion Des actions de l'utilisateur sur les Pompes/Vannes
 */
void Fenetre::alimenter(){


    // alimenter M1
    if(t1->Tank1->getPompe1().getEtat() == ON){
        t1->M1->setPompe(t1->Tank1->getPompe1());
        m1->setText("P11");
    }else if(t1->Tank1->getPompe1().getEtat() == BROKE && t1->Tank1->getPompe2().getEtat() == ON && (!t1->Tank1->getPompe2().isOccupe())){
        t1->M1->setPompe(t1->Tank1->getPompe2());
        m1->setText("P12");
    }else if(t1->Tank1->getPompe1().getEtat() == BROKE && t1->Tank1->getPompe2().getEtat() == BROKE){
        if(t1->Tank2->getPompe2().getEtat() == ON ){
            if(t1->V12->getEtat() == CLOSE){
            t1->M1->setPompe(t1->Tank2->getPompe2());
            t1->M1->setReservoir(*t1->Tank2);
            m1->setText("P22");
            }
            else if(t1->V12->getEtat() == OPEN){
                t1->M1->setPompe(t1->Tank1->getPompe1());
                t1->M1->setReservoir(*t1->Tank1);
                m1->setText("P11");
            }
        }else if(t1->Tank3->getPompe2().getEtat() == ON  ){

            if(t1->V13->getEtat() == CLOSE){
            t1->M1->setPompe(t1->Tank3->getPompe2());
            m1->setText("P32");
            t1->M1->setReservoir(*t1->Tank3);

            }else if(t1->V13->getEtat() == OPEN){
                t1->M1->setPompe(t1->Tank1->getPompe1());
                t1->M1->setReservoir(*t1->Tank1);
                m1->setText("P11");

            }
        }
    }

     // alimenter M2
    if(t1->Tank2->getPompe1().getEtat() == ON){
        t1->M2->setPompe(t1->Tank2->getPompe1());
        m2->setText("P21");
    }else if(t1->Tank2->getPompe1().getEtat() == BROKE && t1->Tank2->getPompe2().getEtat() == ON && (!t1->Tank2->getPompe2().isOccupe())){
        t1->M2->setPompe(t1->Tank2->getPompe2());
        m2->setText("P22");
    }else if(t1->Tank2->getPompe1().getEtat() == BROKE  && t1->Tank2->getPompe2().getEtat() == BROKE){
        if(t1->Tank1->getPompe2().getEtat() == ON   ){
            if(t1->V12->getEtat() == CLOSE){
            t1->M2->setPompe(t1->Tank1->getPompe2());
            t1->M2->setReservoir(*t1->Tank1);
            m2->setText("P12");
            }else if(t1->V12->getEtat() == OPEN){
                            t1->M2->setPompe(t1->Tank2->getPompe1());
                            t1->M2->setReservoir(*t1->Tank2);
                            m2->setText("P21");

                        }
        }else if(t1->Tank3->getPompe2().getEtat() == ON   ){

            if(t1->V23->getEtat() == CLOSE){
            t1->M2->setPompe(t1->Tank3->getPompe2());
            t1->M2->setReservoir(*t1->Tank3);
            m2->setText("P32");
            }else if(t1->V23->getEtat() == OPEN){
                t1->M2->setPompe(t1->Tank2->getPompe1());
                t1->M2->setReservoir(*t1->Tank2);
                m2->setText("P21");

            }
        }
    }

    // alimenter M3
    if(t1->Tank3->getPompe1().getEtat() == ON){
        t1->M3->setPompe(t1->Tank3->getPompe1());
        m3->setText("P31");
    }else if(t1->Tank3->getPompe1().getEtat() == BROKE && t1->Tank3->getPompe2().getEtat() == ON && (!t1->Tank3->getPompe2().isOccupe())){
        t1->M3->setPompe(t1->Tank3->getPompe2());
        m3->setText("P32");

    }else if(t1->Tank3->getPompe1().getEtat() == BROKE && t1->Tank3->getPompe2().getEtat() == BROKE){

        if(t1->Tank1->getPompe2().getEtat() == ON ){
            if(t1->V13->getEtat() == CLOSE){
            t1->M3->setPompe(t1->Tank1->getPompe2());
            t1->M3->setReservoir(*t1->Tank1);
            m3->setText("P12");
            }else if(t1->V13->getEtat() == OPEN){
                            t1->M3->setPompe(t1->Tank3->getPompe1());
                            t1->M3->setReservoir(*t1->Tank3);
                            m3->setText("P31");

                        }
        }else if(t1->Tank2->getPompe2().getEtat() == ON ){
            if(t1->V23->getEtat() == CLOSE){
            t1->M3->setPompe(t1->Tank2->getPompe2());
            t1->M3->setReservoir(*t1->Tank2);
            m3->setText("P22");
            }else if(t1->V23->getEtat() == OPEN){
                t1->M3->setPompe(t1->Tank3->getPompe1());
                t1->M3->setReservoir(*t1->Tank3);
                m3->setText("P31");

            }
        }
    }

    if(check()){
        state->setText("RUNNING");
    }else{
        state->setText("SUSPENDED");
    }


}

// la verification des moteurs

/**
 * @brief Verification Du fonctionnement Du moteur 1
 * @return vrai / faux
 */
bool Fenetre::checkM1(){
    //cout << "DANS M1" << endl;
    //t1->Tank1->affiche();
    cout << t1->M1->getPompe()->getNom() << endl;

    if(t1->M1->getPompe()->getEtat() == ON){
        cout << "pompe on" << endl;
        if(t1->M1->getReservoir()->getEtat() == FULL){
            cout << "reservoir full" << endl;
            return true;
        }else{
            cout << "reservoir empty" << endl;
            return false;
        }
    }else{
        cout << "pompe off" << endl;
        return false;
    }
}

/**
 * @brief Verification Du fonctionnement Du moteur 2
 * @return vrai / faux
 */
bool Fenetre::checkM2(){
    //cout << "DANS M2" << endl;
     //t1->Tank2->affiche();
     cout << t1->M2->getPompe()->getNom() << endl;

    if(t1->M2->getPompe()->getEtat() == ON){
        cout << "pompe on" << endl;
        if(t1->M2->getReservoir()->getEtat() == FULL){
            cout << "reservoir full" << endl;
            return true;
        }else{
            cout << "reservoir empty" << endl;
            return false;
        }
    }else{
        cout << "pompe off" << endl;
        return false;
    }
}

/**
 * @brief Verification Du fonctionnement Du moteur 3
 * @return vrai / faux
 */
bool Fenetre::checkM3(){
   // cout << "DANS M3" << endl;
   //t1->Tank3->affiche();
     cout << t1->M3->getPompe()->getNom() << endl;
    if(t1->M3->getPompe()->getEtat() == ON){
        cout << "pompe on" << endl;
        if(t1->M3->getReservoir()->getEtat() == FULL){
            cout << "reservoir full" << endl;
            return true;
        }else{
            cout << "reservoir empty" << endl;
            return false;
        }
    }else{
        cout << "pompe off" << endl;
        return false;
    }
}

/**
 * @brief Obtenir le nom du pilote
 * @return nom_pilote
 */
string Fenetre::getUsers(){
    QString user = QInputDialog::getText(this,"Pseudo","Saissisez le nom du pilote");
    return user.toUtf8().constData();
}

/**
 * @brief Inscrire Le nom du pilote dans la BD
 * @param nom_pilote
 */
void Fenetre::subUsers(std::string user){
    string const name_fic("/Users/kira/Desktop/Avion_XUNYUE_RAKOTOMANGA/users.txt");//mettre l'emplacement du fichiers

    std::ofstream flux(name_fic.c_str(), ios::app);
    if(flux){
        flux << user ;

    }
}

void Fenetre::evaluate(){
    bool grade = check();
    string const name_fic("/Users/kira/Desktop/Avion_XUNYUE_RAKOTOMANGA/users.txt");
    std::ofstream flux(name_fic.c_str(), ios::app);
    if(flux){
        if(grade){
        flux << " 10/10" ;
        }else{
            flux << "0/10";
        }
    }

    Fenetre::close();
}

/*Fenetre::~Fenetre(){
    delete b2;
    delete b1;
    delete t1;
     delete b3;
     delete b4;
     delete b5;
     delete b6;
     delete b7;
     delete b8;
     delete b9;
     delete b10;
     delete p11;
     delete p12;
     delete p21;
     delete p22;
     delete p32;
     delete p31;
     delete vt12;
     delete vt23;
     delete v12;
     delete v13;
     delete v23;
     delete tank1;
     delete tank2;
     delete tank3;
     delete cap1;
     delete cap2;
     delete cap3;
     delete m1;
     delete m2;
     delete m3;
     delete state;



}*/
