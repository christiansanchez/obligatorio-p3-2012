#ifndef CIUDADES_H_INCLUDED
#define CIUDADES_H_INCLUDED
#include "Pareja.h"

typedef struct nodoA {
    pareja info_pareja;
    nodoA * Hizq;
    nodoA * Hder;
} nodoCiudades;

typedef nodoCiudades * ciudades;

//Crear ciudades vacias
void crearCiudades(ciudades &c);

//Devolver informacion de pareja de ciudades
//PRECONDICION: ciudades no vacia
pareja darInfoPareja(ciudades c);

//Saber si las ciudades son vacias
bool esVacioCiudades(ciudades c);

//Obtener la subciudades izquierda
//PRECONDICION: ciudades no vacia
ciudades ciudadesIzq(ciudades c);

//Obtener la subciudades derechas
//PRECONDICION: ciudades no vacia
ciudades ciudadesDer(ciudades c);

//se le pasa la pareja y te devuelve una ciudad atomica
ciudades crearCiudadesAtomica(pareja p);

//dado una pareja y las ciudades devuelve true si existe la ciudad y false en caso contrario
bool existePareja(ciudades c, pareja p);

//Agrega una nueva pareja a las ciudades la cual quedara ordenada por nombre de ciudad
void agregarInfoPareja(ciudades &c, pareja p);

//Muestro las ciudades en orden por alfabetico
//PRECONDICION: para ver algo las ciudades no deben ser vacias
void desplegarCiudades(ciudades c);

//devuelve la pareja que se busca por nombre
//PRECONDICION: debe existir la ciudad
pareja buscarParejaNombreCiudad(ciudades c, string nomb_ciudad);


bool Member(ciudades c, int num_ciudad);

bool Member(ciudades, string nomb_ciudad);
//modifica una pareja
//void Modify(ciudades c, pareja nuevaP);


#endif // CIUDADES_H_INCLUDED
