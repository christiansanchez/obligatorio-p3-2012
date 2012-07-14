#ifndef RECORRIDO_H_INCLUDED
#define RECORRIDO_H_INCLUDED
#include "Parada.h"

typedef struct nodoL {
    parada info_parada;
    nodoL * sig;
}nodoR;

typedef struct {
    nodoR * prim;
    nodoR * ult;
}recorrido;




#endif // RECORRIDO_H_INCLUDED
