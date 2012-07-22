#ifndef MAPA_H_INCLUDED
#define MAPA_H_INCLUDED
#include "Tramo.h"
#include <stdio.h>

const int cant_ciudades = 100;/*cantidad de ciudades para prueba*/
typedef tramo mapa[cant_ciudades];

void Crear(mapa &m);//Crea un grafo vacío.

//determina si un vertice existe en el grafo
//bool PerteneceVertice(mapa m, int i);

//determina si la arista pertenece al grafo
bool PertenceArista(mapa m, int i, int j);

//Inserta un nuevo vertice al grafo
//PRECONDICION: el vertice no debe pertencer al grafo
//void InsertarVertice(mapa &m, int v);

//Inserta una nueva arista al grafo
//PRECONDICION: la arista no debe pertenecer al grafo
void InsertarArista(mapa &m, int v1, int v2);

//determina el grado de un vertice
//PRECONDICION: el vertice debe pertencer al grafo
int GradoVertice(mapa m, int v);

void listarCiudadesAdyacentes (mapa m, int ciu1);

void DFS (mapa map,int ciu1, int ciuActual, bool visitado[cant_ciudades],bool existe);
#endif // MAPA_H_INCLUDED
