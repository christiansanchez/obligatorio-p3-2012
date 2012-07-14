#ifndef PAREJA_H_INCLUDED
#define PAREJA_H_INCLUDED
#include "String.h"

typedef struct{
    int num_ciudad;
	string nombre_ciudad;
} pareja;


//Permite cargar una pareja desde teclado
void cargarPareja(pareja &p);

//selectora de numero de ciudad
int darNum_ciudad(pareja p);

//selectora de nombre de la ciudad
void DarNombreCiudad(pareja p, string &nombreCiudad);

//Permite mostrar una pareja en consola
void mostrarPareja(pareja p);


//string darNombre_ciudad(pareja p);
//void setNum_ciudad(pareja &p, int numero);
//void setNombre_ciudad(pareja &p, string nombre);
//void cargarPareja(pareja &p);
//void borrarPareja(pareja &p);
#endif // PAREJA_H_INCLUDED
