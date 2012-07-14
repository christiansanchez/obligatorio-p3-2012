#ifndef PAREJA_H_INCLUDED
#define PAREJA_H_INCLUDED
#include "String.h"

typedef struct{
    int num_ciudad;
	string nombre_ciudad;
} pareja;

void crearPareja(pareja &p);
void cargarPareja(pareja &p);
void borrarPareja(pareja &p);
void mostrarPareja(pareja p);
int darNum_ciudad(pareja p);
string darNombre_ciudad(pareja p);
void setNum_ciudad(pareja &p, int numero);
void setNombre_ciudad(pareja &p, string nombre);

#endif // PAREJA_H_INCLUDED
