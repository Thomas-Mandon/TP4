#include "Capteur.h"
#include "kbhit.h"

namespace nsDigicode
{

Capteur::Capteur()
{

}

int Capteur::detecter() const
{
    return _kbhit();
}

}
