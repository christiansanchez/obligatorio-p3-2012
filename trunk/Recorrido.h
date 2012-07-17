#ifndef RECORRIDO_H_INCLUDED
#define RECORRIDO_H_INCLUDED
#include "Parada.h"
#include "string.h"

typedef struct nodoL {  parada info_parada;
                        nodoL * sig;
                     }nodoR;

typedef struct {    nodoR * prim;
                    nodoR * ult;
                } recorrido;


void CrearRecorrido (recorrido &r);

bool RecorridoVacio (recorrido r);

//Precondición: !Vacia(l)
parada PrimeraParada (recorrido r);

//Precondición: !Vacia(l)
parada UltimaParada (recorrido r);

//Precondición : !Vacia(l)
void RestoRecorrido (recorrido &r);

void InsertaOrigen (recorrido &r, parada p);

void InsertaDestino (recorrido &r, parada p);

int CantParadasRecorrido(recorrido r);

void ListarRecorrido(recorrido r);

#endif // RECORRIDO_H_INCLUDED


/*

K-ésimo: Secuencia x N -> T
Devuelve el elemento que ocupa la posición K de la secuencia.
Precondición: El largo de la secuencia es mayor o igual a K.
*/
