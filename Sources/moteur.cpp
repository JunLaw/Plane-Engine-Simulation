#include "../Header/moteur.h"

Moteur::Moteur(){}

/**
 * @brief Constructeur Moteur avec Reservoir et Pompe
 * @param numeroMoteur
 * @param reservoir
 * @param pompe
 */
Moteur::Moteur(int numeroMoteur,Reservoir &res,Pompe& pompe){
    this->numeroMoteur = numeroMoteur;
    this->ResAlimenter = &res;
    this->pompe = &pompe;
    res.getPompe1().setoccupe();

}

/**
 * @brief equivalent de to_string Affiche les information generale de l'objet
 */
void Moteur::affiche(){
    std::cout << "Numero Moteur : " << this->numeroMoteur << std::endl << "Etat reservoir relié :" << std::endl;
    this->ResAlimenter->affiche();
    std::cout << "Etat Pompe Relié au moteur : " << std::endl;
    this->pompe->affiche();

}

/**
 * @brief Retourner la pompe courante
 * @return la pompe
 */
Pompe* Moteur::getPompe(){
    return this->pompe;



}

/**
 * @brief Rattacher une nouvelle pompe
 * @param nouvelle_pompe
 */
void Moteur::setPompe(Pompe &p){
    this->getPompe()->disponible();
    this->pompe = &p;
    this->pompe->setoccupe();


}

/**
 * @brief Obtenir le reservoir courant
 * @return Le Reservoir
 */
Reservoir* Moteur::getReservoir(){
    return this->ResAlimenter;
}

/**
 * @brief Moteur::getnumeroMoteur/Getter
 * @return
 */
int Moteur::getnumeroMoteur(){
    return this->numeroMoteur;
}

/**
 * @brief Moteur::setReservoir/Setter
 * @param res
 */
void Moteur::setReservoir(Reservoir &res){
    this->ResAlimenter = &res;
}

/*Moteur::~Moteur(){
    delete ResAlimenter;
    delete pompe;
}*/
