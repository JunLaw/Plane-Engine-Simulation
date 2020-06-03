#include "../Header/vanne.h"

Vanne::Vanne()
{

}
/**
 * @brief Vanne::Vanne/Constructor
 * @param nom_Vannes
 */
Vanne::Vanne(std::string nom){
    this->nom = nom;
    this->etat = OPEN;

}

/**
 * @brief Vanne::getNom/Getter
 * @return nom_vanne
 */
std::string Vanne::getNom(){
    return this->nom;
}

/**
 * @brief Vanne::getEtat/Getter
 * @return etat_vanne
 */
enum etatVanne Vanne::getEtat(){
    return this->etat;

}

/**
 * @brief Vanne::setEtat/setter
 * @param new_etat_vanne
 */
void Vanne::setEtat(enum etatVanne state){
    this->etat = state;

}
/**
 * @brief Vanne::ouvrir/Ouvrir la vanne
 */
void Vanne::ouvrir(){
    this->setEtat(OPEN);

}

/**
 * @brief Vanne::fermer/Fermer la vanne
 */
void Vanne::fermer(){
    this->setEtat(CLOSE);

}

/**
 * @brief equivalent de to_string Affiche les information generale de l'objet
 */
void Vanne::affiche(){
    if(this->etat == CLOSE){
    std::cout << "nom de la vanne: " << this->nom << std::endl << "etat de la vanne : CLOSE"  << std::endl;
    }else{
         std::cout << "nom de la vanne: " << this->nom << std::endl << "etat de la vanne : OPEN"  << std::endl;
    }
}
