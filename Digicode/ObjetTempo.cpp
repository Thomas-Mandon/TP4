#include "ObjetTempo.h"

#define TEMPO_ ObjetTempo::

namespace nsDigicode
{

TEMPO_ ObjetTempo(Chrono* chrono, unsigned _delai): delai(_delai), leChrono(chrono)
{

}

Chrono* TEMPO_ getChrono() const
{
    return leChrono;
}

void TEMPO_ finTempo()
{
    attente = 0;
}

int TEMPO_ getDelai() const
{
    return delai;
}

}
