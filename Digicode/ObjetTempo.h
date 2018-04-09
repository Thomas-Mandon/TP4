#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
        unsigned delai;
    protected:
        Chrono* leChrono;
        bool attente;
    public:
        ObjetTempo(Chrono* chrono, unsigned _delai = 0);
        Chrono* getChrono(void) const;
        void finTempo(void);
        int getDelai(void) const;
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
