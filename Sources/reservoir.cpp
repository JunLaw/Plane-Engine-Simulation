#include "../Header/reservoir.h"


using namespace std;

Reservoir::Reservoir(){


}

/**
 * @brief Reservoir::Reservoir/Constructor
 * @param num_reservoir
 * @param capacité_reservoir
 * @param pompe1_principale
 * @param pompe2_secours
 */
Reservoir::Reservoir(int num,int cap,Pompe& pompe1,Pompe& pompe2){
    this->etat = FULL;
    numero = num;
    capacite = cap;
    capmax = cap;
    this->pompe1 = pompe1;
    this->pompe2 = pompe2;

}

/**
 * @brief Reservoir::getCapacite/Getter
 * @return capacité_reservoir
 */
int Reservoir::getCapacite(){
    return this->capacite;
}

/**
 * @brief Reservoir::getCapmax/Getter
 * @return capacité_initiale_reservoir
 */
int Reservoir::getCapmax(){
    return this->capmax;
}

/**
 * @brief Reservoir::getNumero/Getter
 * @return numero_reservoir
 */
int Reservoir::getNumero(){
    return this->numero;
}

/**
 * @brief equivalent de to_string Affiche les information generale de l'objet
 */
void Reservoir::affiche(){


        if(this->etat == FULL){
     std::cout << "Etat Reservoir :  " << " FULL " << endl << "numero : " << this->numero << endl << "capacite : " << this->capacite << endl;
        }if(this->etat == EMPTY){
            std::cout << "Etat Reservoir : EMPTY" << endl << "numero : " << this->numero << endl << "capacite : " << this->capacite << endl;
        }
       this->pompe1.affiche();
        this->pompe2.affiche();



}

/**
 * @brief Reservoir::setCapacite/Setter
 * @param capacité_nouvelle
 */
void Reservoir::setCapacite(int cap)
{
    this->capacite = cap;
}
/**
 * @brief Reservoir::setEtat/Setter
 * @param etat_reservoir
 */
void Reservoir::setEtat(enum etatReservoir state){
    this->etat = state;

}

/**
 * @brief Reservoir::getEtat/Getter
 * @return etat_reservoir
 */
enum etatReservoir Reservoir::getEtat(){
    return this->etat;

}

/**
 * @brief Reservoir::Vider/Vider la RESERVOIR
 */
void Reservoir::Vider(){
    this->setEtat(EMPTY);
    this->capacite = 0;
}

/**
 * @brief Reservoir::Remplir/Remplir Le Reservoir
 */
void Reservoir::Remplir(){
    this->setEtat(FULL);
    this->capacite = capmax;
}

/**
 * @brief Reservoir::usePompe/Activer la pompe inactive
 * @param numero_pompe
 */
void Reservoir::usePompe(int i){
    if(i == 1){
         this->pompe1.eteindre();
         this->pompe2.demarrer();
    }else if(i == 2){
        this->pompe1.demarrer();
        this->pompe2.eteindre();

    }else{
        this->pompe1.eteindre();
        this->pompe2.eteindre();
    }

}

//RETOURNE LA POMPE FONCTIONNEL
/**
 * @brief Reservoir::getPompe/Getter
 * @return pompe_active
 */
Pompe& Reservoir::getPompe(){
    if(this->pompe1.getEtat() == ON  && (this->pompe2.getEtat() == OFF || this->pompe2.getEtat() == BROKE) ){
        return this->pompe1;
    }else if(this->pompe2.getEtat() == ON  && (this->pompe1.getEtat() == OFF || this->pompe1.getEtat() == BROKE)){
        return this->pompe2;
    }
    else{

    }
}

/**
 * @brief Reservoir::getPompe1/Getter
 * @return pompe_principale
 */
Pompe& Reservoir::getPompe1(){
    return this->pompe1;
}

/**
 * @brief Reservoir::getPompe2/Getter
 * @return pompe_secours
 */
Pompe& Reservoir::getPompe2(){
    return this->pompe2;
}

/**
 * @brief Reservoir::activerPompe1/Activer pompe Principal/Eteindre pompe de secours
 */
void Reservoir::activerPompe1(){
    this->pompe1.demarrer();
    this->pompe2.eteindre();

}

/**
 * @brief Reservoir::offp1/Eteindre pompe principale
 */
void Reservoir::offp1(){
    this->pompe1.eteindre();
}

/**
 * @brief Reservoir::offp2/Eteindre pompe secours
 */
void Reservoir::offp2(){
    this->pompe2.eteindre();

}

/**
 * @brief Reservoir::onp1/Allumer pompe principal
 */
void Reservoir::onp1(){
    this->pompe1.demarrer();
}

/**
 * @brief Reservoir::onp2/Allumer pompe secours
 */
void Reservoir::onp2(){
    this->pompe2.demarrer();
}

/**
 * @brief Reservoir::activerPompe1/Eteindre pompe Principal/Activer pompe de secours
 */
void Reservoir::activerPompe2(){
    this->pompe1.eteindre();
    this->pompe2.demarrer();

}
