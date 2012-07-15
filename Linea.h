#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "Recorrido.h"
#include "String.h"
typedef struct{
	string codigo;
	int num_origen;
	int num_destino;
	recorrido linea_recorrido;
} linea;

//Permite cargar una linea desde teclado
void cargarLinea(linea &l);

//retorna codigo alfanumerico
void darCodigo(linea l, string &codigo);

//retorna el numero correspondiente a la ciudad de origen
int darNumOrigen(linea l);

//retorna el numero correspondiente a la ciudad de destino
int darNumDestino(linea l);

//retorna el recorrido correspondiente a esa linea
recorrido darLineRecorrido(linea l);

//dice si dos lineas tienen el mismo codigo
bool igualesLinea(linea l1, linea l2);

//dice si la primer linea es mayor que la segunda por codigo
bool mayorLinea(linea l1, linea l2);

#endif // LINEA_H_INCLUDED
