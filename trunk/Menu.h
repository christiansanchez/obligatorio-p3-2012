#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "Ciudades.h"
#include "Lineas.h"
#include "Mapa.h"
void menu(int &op_elegida);

void despedida(int op);

//carga las ciudades e inicializa mapa
void cargarCiudades(ciudades &c, mapa &map);

//dados 2 nombres de ciudades, agerga un nuevo tramo entre ellas
void opcion_uno(mapa &map, ciudades ciud);

//dados 2 nombres de ciudades saber si existe un tramo que las una
void opcion_dos(mapa map, ciudades ciud);

//Ingresar una nueva linea a la empresa
void opcion_tres(mapa map, ciudades ciud, lineas &ls);

//listar los datos basicos de todas las lineas de la empresa
void opcion_cuatro(ciudades ciud, lineas ls);

//dado el codigo que identifica a una linea agregar una nueva parada a su recorrido
void opcion_cinco(mapa map, ciudades ciud, lineas &ls);

//dado el codigo que identifica a una linea, listar las paradas
void opcion_seis(ciudades ciud, lineas ls);

#endif // MENU_H_INCLUDED
