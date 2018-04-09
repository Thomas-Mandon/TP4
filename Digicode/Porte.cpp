#include <iostream>
#include "Porte.h"
#include "kbhit.h"

namespace nsDigicode {

Porte::Porte(Chrono* chrono, unsigned _delai): ObjetTempo(chrono, _delai), myCapteur(Capteur())
{

}

bool Porte::fermer()
{
    std::cout << "Porte ouverte. Veuillez la refermer rapidement afin de ne pas déclencher l'alarme." << std::endl;
    while (attente)
        if (myCapteur.detecter()) {this->leChrono->arreter(); return 0;}
    return 1;
}

bool Porte::ouvrir()
{
    std::cout << "Porte déverrouillée, vous avez 20 secondes pour entrer." << std::endl;
    attente = 1;
    this->leChrono->demarrer(this);
    while(attente)
        if (myCapteur.detecter()) return this->fermer();
    return 0;
}

}
