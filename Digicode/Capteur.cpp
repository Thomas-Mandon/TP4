#include "Capteur.h"
#include "kbhit.h"

Capteur::Capteur()
{

}

int Capteur::detecter() const
{
    return _kbhit();
}
