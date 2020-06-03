#include "../Header/pompe.h"
#include "../Header/reservoir.h"
using namespace std;

Pompe::Pompe()
{
}
/**
 * @brief Pompe::Pompe/Constructor
 * @param etat_pompe
 * @param nom_pompe
 */
Pompe::Pompe(bool state,std::string nom){
    if(state){
        this->state = OFF;
        this->secours = true;
    }else{
        this->state = ON;
        this->secours = false;
    }
    this->nom = nom;
    this->res = 0;
}

/**
 * @brief Pompe::Pompe/Constructor
 * @param etat_pompe
 * @param nom_pompe
 * @param reservoir_relié
 */
Pompe::Pompe(bool state,std::string nom,Reservoir& r){
    if(state){
        this->state = OFF;
        this->secours = true;
    }else{
        this->state = ON;
        this->secours = false;
    }
    this->nom = nom;
    this->res = &r;
}

/**
 * @brief equivalent de to_string Affiche les information generale de l'objet
 */
void Pompe::affiche(){
    cout << "Nom de la pompe :" << this->nom << endl;
    if(this->state == ON){
    cout << "Etat de la pompe : ON" << endl;
    }else if(this->state == OFF){
        cout << "Etat de la pompe : OFF"<<endl;
    }else{
        cout << "Etat de la pompe : BROKE" << endl;
    }
    if(this->secours == true) {
        cout << "Type de Pompe : Secours" << endl;
    }else{
        cout << "Type de Pompe : Principal" << endl;
    }


}

/**
 * @brief Pompe::getEtat/Getter
 * @return etat_pompe
 */
enum etatPompe Pompe::getEtat(){
    return this->state;

}

/**
 * @brief Pompe::getSecours/getter
 * @return vrai/pome Principale faux/pompe Secondaire
 */
bool Pompe::getSecours(){
    return this->secours;
}

/**
 * @brief Pompe::isOccupe/Verifie si la pompe est relié à un reservoir
 * @return vrai/si Relié faux/sinon
 */
bool Pompe::isOccupe(){
    return this->occupe;
}

/**
 * @brief Pompe::setoccupe/Setter
 * @return void
 */
void Pompe::setoccupe(){
    this->occupe = true;
}

/**
 * @brief Pompe::disponible/Change l'etat de disponibilité de la pompe
 */
void Pompe::disponible(){
    this->occupe = false;
}

/**
 * @brief Pompe::getNom/getter
 * @return nom_pompe
 */
std::string Pompe::getNom(){
    return this->nom;
}


/**
 * @brief Pompe::setEtat/Setter
 * @param etat_pompe
 */
void Pompe::setEtat(enum etatPompe etat){
    if(etat == ON){
        this->state = ON;

    }else if(etat == OFF){
        this->state = OFF;
    }else{
        this->state = BROKE;
    }

}

/**
 * @brief Pompe::demarrer/ouvrir la pompe
 */
void Pompe::demarrer(){
    setEtat(ON);

}
/**
 * @brief Pompe::eteindre/fermer la pompe
 */
void Pompe::eteindre(){
    setEtat(OFF);

}

/**
 * @brief Pompe::casser/casser la pompe
 */
void Pompe::casser(){
    setEtat(BROKE);

}

/**
 * @brief Pompe::getRes/getter
 * @return Reservoir_relié
 */
Reservoir* Pompe::getRes(){
    return this->res;
}

/*Pompe::~Pompe(){
    delete this->res;
}*/
