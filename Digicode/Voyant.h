#ifndef VOYANT_H
#define VOYANT_H
#include <string>

namespace nsDigicode
{

enum Couleur {rouge = 0, vert = 1};
enum Etat {allume = 1, eteint = 0};

class Voyant
{
    Couleur myColor;
    Etat myState;
public:
    Voyant(Couleur color = rouge, Etat state = eteint);
    std::string getStatut(void) const;
    void allumer();
    void eteindre();
};

}

#endif // VOYANT_H
