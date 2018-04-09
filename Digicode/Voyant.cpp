#include "Voyant.h"

namespace nsDigicode
{

Voyant::Voyant(Couleur color, Etat state): myColor(color), myState(state)
{

}

std::string Voyant::getStatut() const
{
    if (myState == allume) return "ON";
    return "OFF";
}

void Voyant::allumer()
{
    myState = allume;
}

void Voyant::eteindre()
{
    myState = eteint;
}

}
