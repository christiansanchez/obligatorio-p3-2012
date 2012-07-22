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

void Crear(recorrido &r);//Crea una secuencia vac�a.

void InsFront(recorrido &r, parada p);//Agrega un elemento de tipo "parada" a la secuencia.

bool Esvacia(recorrido r);//Determina si la secuencia est� vac�a o no.

//Precondici�n: la secuencia no es vac�a.
parada Primero(recorrido r);//Devuelve el primer elemento de la secuencia.

//Precondici�n : la secuencia no es vac�a.
void Resto(recorrido &r);//Devuelve la secuencia sin su primer elemento.

int Largo(recorrido r);//Devuelve la cantidad de elementos de la secuencia.

//Precondici�n : la secuencia no es vac�a.
parada Ultimo(recorrido r);

void InsBack(recorrido &r, parada p);

bool Pertenece (recorrido r, parada p);

void ListarRecorrido(recorrido r, ciudades ciu);

#endif // RECORRIDO_H_INCLUDED
