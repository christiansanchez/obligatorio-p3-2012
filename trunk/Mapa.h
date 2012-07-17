#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include "Tramo.h"
#include <stdio.h>

const int cant_ciudades = 100;/*cantidad de ciudades para prueba*/
typedef tramo mapa[cant_ciudades];

void crearMapa(mapa &m);
void agregarTramo (mapa &m, int i, int j);
int calcularGrado (mapa m, int i);
void listarCiudadesAdyacentes (mapa m, int i);
bool hayTramo (mapa m, int i, int j);
bool esSimple (mapa m);
bool esCompleto (mapa m);
bool esRegular (mapa m);
/*
//creo un mapa vacio
void crearMapa(mapa &m);

//si hay tramo en el mapa entre 2 ciudades
bool hayTramo(mapa m, int ciudad1, int ciudad2);
*/



#endif // MAPA_H_INCLUDED
