#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "Recorrido.h"

typedef struct{
	string codigo;
	int num_origen;
	int num_destino;
	recorrido linea_recorrido;
} linea;

void crearLinea(linea &l);
void cargarLinea(linea &l);
void borrarLinea(linea &l);
void mostrarLinea(linea l);
string darCodigo(linea l);
int darNum_origen(linea l);
int darNum_destino(linea l);
recorrido darLinea_recorrido(linea l);
void setCodigo(linea &l, string codigo);
void setNum_origen(linea &l, int numero);
void setNum_destino(linea &l, int numero);
void setRecorrido(linea &l, recorrido recorrido);

#endif // LINEA_H_INCLUDED
