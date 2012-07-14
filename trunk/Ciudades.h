#ifndef CIUDADES_H_INCLUDED
#define CIUDADES_H_INCLUDED
#include "Pareja.h"

typedef struct nodoA {
    pareja info_pareja;
    nodoA * Hizq;
    nodoA * Hder;
} nodoCiudades;

typedef nodoCiudades * ciudades;

void Make(ciudades &abb);
bool Member(ciudades abb, int num_ciudad);
void Insert(ciudades &abb, pareja* p);
pareja* Find(ciudades abb, int num_ciudad);
void Modify(ciudades abb, pareja* nuevo);
void Delete(ciudades &abb, int num_ciudad);
void desplegarCiudades(ciudades abb);
bool esVacioAbb(ciudades abb);


#endif // CIUDADES_H_INCLUDED
