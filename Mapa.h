#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED

typedef struct nodoLMapa{
    int num_ciudad_mapa;
    nodoLMapa * sig;
}nodoMapa;

typedef nodoMapa * mapa;



#endif // MAPA_H_INCLUDED
