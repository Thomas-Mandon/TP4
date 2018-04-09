#include "Clavier.h"
#include <iostream>
#include "kbhit.h"

Clavier::Clavier()
{

}

signed Clavier::saisirChiffre() const
{
    signed c = _kbhit();
    if (c == 0) return -1;
    return c;
}
