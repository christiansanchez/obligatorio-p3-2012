#ifndef RECORRIDO_H_INCLUDED
#define RECORRIDO_H_INCLUDED
#include "Parada.h"
#include "Ciudades.h"
#include "String.h"
typedef struct nodoL {
                        parada info_parada;
                        nodoL * sig;
                     }nodoR;

typedef struct {
                    nodoR * prim;
					nodoR * ult;
                }recorrido;

// OPERACIONES PRIMITIVAS ------------

void Crear(recorrido &r);//Crea una secuencia vacía.

void InsFront(recorrido &r, parada p);//Agrega un elemento de tipo "parada" a la secuencia.

bool Esvacia(recorrido r);//Determina si la secuencia está vacía o no.

//Precondición: la secuencia no es vacía.
parada Primero(recorrido r);//Devuelve el primer elemento de la secuencia.

//Precondición : la secuencia no es vacía.
void Resto(recorrido &r);//Devuelve la secuencia sin su primer elemento.

int Largo(recorrido r);//Devuelve la cantidad de elementos de la secuencia.

//Precondición : la secuencia no es vacía.
parada Ultimo(recorrido r);

void InsBack(recorrido &r, parada p);

bool Pertenece (recorrido r, parada p);

void ListarRecorrido(recorrido r, ciudades ciu);

#endif // RECORRIDO_H_INCLUDED
