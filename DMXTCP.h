#ifndef DMXTCP_H
#define DMXTCP_H
#include "SNClientTCP.h"



class DMXTCP {
    private:
        unsigned char trame[512];
        SNClientTCP monClient;

    public:
        DMXTCP();
        void ModifierCanal(unsigned short canal, unsigned char valeur);
        void Envoyer(char * IP, unsigned short port);
        void FullOn();
        void FullOff();
        void Demonstration();

};

#endif // DMXTCP_H_INCLUDED
