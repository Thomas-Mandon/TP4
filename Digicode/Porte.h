#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "Capteur.h"

namespace nsDigicode {

class Porte: public ObjetTempo
{
    bool fermer(void);
    Capteur myCapteur;
public:
    Porte(Chrono* chrono, unsigned _delai = 0);
    bool ouvrir(void);
};

}

#endif // PORTE_H
