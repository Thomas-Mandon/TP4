#include <iostream>
#include "Clavier.h"
#include "kbhit.h"

namespace nsDigicode
{

Clavier::Clavier()
{

}

signed Clavier::saisirChiffre() const
{
    signed c = _kbhit();
    if (c == 0) return -1;
    return c;
}

}
