#ifndef PAREJA_H_INCLUDED
#define PAREJA_H_INCLUDED
#include "String.h"

typedef struct{
    int num_ciudad;
	string nombre_ciudad;
} pareja;


//Permite cargar una pareja desde teclado
void cargarPareja(pareja &p, int num_ciudad);

//selectora de numero de ciudad
int darNumCiudad(pareja p);

//selectora de nombre de la ciudad
void darNombreCiudad(pareja p, string &nombreCiudad);

//Permite mostrar una pareja en consola
void desplegarPareja(pareja p);

//dice si dos parejas son iguales
bool igualesPareja(pareja p1, pareja p2);

//dice si la primer pareja es mayor que la segunda
bool mayorPareja(pareja p1, pareja p2);

//dada una pareja y un nombre de ciudad dice si son iguales
bool igualNombreCiudad(pareja p, string c);

//dada una pareja y un nombre dice si la primera es mayor que la segunda
bool mayorNombreCiudad(pareja p, string c);

#endif // PAREJA_H_INCLUDED
