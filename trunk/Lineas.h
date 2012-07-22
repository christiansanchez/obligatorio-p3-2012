#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
#include "String.h"
#include "Linea.h"

typedef struct nodoLS {
    linea info_linea;
    nodoLS * Hizq;
    nodoLS * Hder;
} nodoLineas;

typedef nodoLineas * lineas;

//Primitivas:
//----------------------------------------------------
//crea un diccionario vacio
void Make(lineas &l);

//dice si existe un elemento en el diccionario segun la clave
bool Member(lineas ls, string codigo);

//inserta un elemento en el diccionario
//PRECONDICION: el elemento a insertar no es miembro del diccionario
void Insert(lineas &ls, linea l);

//dada la clave de un elemento devuelve el elemento con dicha clave
//PRECONDICION: el elemento es miembro del diccionario
linea Find(lineas ls, string codigo);
//----------------------------------------------------

//se le pasa la linea y te devuelve una lineas atomica
lineas crearLineasAtomica(linea l);

//Saber si el diccionario es vacio
bool esVacioLineas(lineas l);

//Devolver linea de lineas
//PRECONDICION: lineas no vacia
linea darLinea(lineas l);

//Obtener la sublineas izquierda
//PRECONDICION: lineas no vacia
lineas lineasIzq(lineas l);

//Obtener la sublineas derechas
//PRECONDICION: lineas no vacia
lineas lineasDer(lineas l);

//muestro todas las lineas
//void desplegarLineas(lineas ls, ciudades c);

#endif // LINEAS_H_INCLUDED
