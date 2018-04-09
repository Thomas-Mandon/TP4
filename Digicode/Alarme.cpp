#include <iostream>
#include <unistd.h>
#include "Alarme.h"

namespace nsDigicode
{

Alarme::Alarme()
{

}

void Alarme::declencher() const
{
    while (true)
    {
        std::cout << "Alarme : la porte n'a pas été refermée" << std::endl;
        sleep(1);
    }
}

}
