#include "DMXTCP.h"
#include <time.h>
#include <iostream>

using namespace std;

//Le constructeur
DMXTCP::DMXTCP()
{
    for(int i=0; i<512; i++)
    {
        trame[i]=0;
    }
}

//La méthode ModifierCanal
void DMXTCP::ModifierCanal(unsigned short canal, unsigned char valeur)
{
    trame[canal-1] = valeur;
}

void DMXTCP::Envoyer(char* IP, unsigned short port)
{
    monClient.SeConnecterAUnServeur(IP,port);
    monClient.Envoyer((char*)trame, 512);
}

void DMXTCP::FullOff()
{
     for(int i=0; i<512; i++)
    {
        trame[i]=0;
    }
}

void DMXTCP::FullOn()
{
     for(int i=0; i<512; i++)
    {
        trame[i]=0xff;
    }
}

void DMXTCP::Demonstration()
{
    srand(time(0));
    for(int i=0;i<512;i++){
        trame[i]=rand()%256;
        cout<<hex<<(int)trame[i];
    }
}
