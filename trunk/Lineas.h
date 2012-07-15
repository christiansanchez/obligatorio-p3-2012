#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
#include "String.h"
#include "Linea.h"

typedef struct nodoA {
    linea info_linea;
    nodoA * Hizq;
    nodoA * Hder;
} nodoLineas;

typedef nodoLineas * lineas;

//Crear lineas vacias
void crearLineas(lineas &l);

//Devolver linea de lineas
//PRECONDICION: lineas no vacia
linea darLinea(lineas l);

//Saber si las lineas son vacias
bool esVacioLineas(lineas l);

//Obtener la sublineas izquierda
//PRECONDICION: lineas no vacia
lineas lineasIzq(lineas l);

//Obtener la sublineas derechas
//PRECONDICION: lineas no vacia
lineas lineasDer(lineas l);

//se le pasa la linea y te devuelve una lineas atomica
lineas crearLineasAtomica(linea l);

//Agrega una nueva linea a las lineas la cual quedara ordenada
void agregarLinea(lineas &ls, linea l);

//dado un codigo de la linea dice si ya esta registrado o no
bool existeLinea(lineas ls, linea l);

#endif // LINEAS_H_INCLUDED
