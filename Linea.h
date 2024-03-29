#ifndef LINEA_H_INCLUDED
#define LINEA_H_INCLUDED
#include "Recorrido.h"
typedef struct{
	string codigo;
	int num_origen;
	int num_destino;
	recorrido linea_recorrido;
} linea;

//Permite cargar una linea desde teclado
void cargarLinea(linea &l, ciudades ciud, string codigo, bool &ok);

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

bool igualesLineaCodigo(linea l, string codigo);

//dice si la primer linea es mayor que la segunda por codigo
bool mayorLinea(linea l1, linea l2);

bool mayorLineaCodigo(linea l1, string codigo);

//despliega los datos basicos de una linea(codigo, destino, origen, cantidad de paradas)
void desplegarDatosBasicos(linea l, ciudades c);

//despliega numero de parada y su nombre
void desplegarParadas(linea l, ciudades c);

//modificar ciudad de destino
void cambiarCiduadDestino(linea &l, int new_num_dest);

//modifica la el recorrido de la linea
void agregarParada(linea &l,int new_num_dest);

#endif // LINEA_H_INCLUDED
