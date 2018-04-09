#include "Clavier.h"
#include "kbhit.h"

Clavier::Clavier()
{

}

signed Clavier::saisirChiffre() const
{
    if (!_kbhit()) return -1;
    return _kbhit();
}
