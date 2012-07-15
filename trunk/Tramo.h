#ifndef TRAMO_H_INCLUDED
#define TRAMO_H_INCLUDED
typedef struct nodoLTramo{
    int num_ciudad_tramo;
    nodoLTramo * sig;
}nodoTramo;

typedef nodoTramo * tramo;

//Crea un tramo vacio
void crearTramo(tramo &t);

//Dado un tramo retorna true en caso de ser vacio, de lo contrario, false
bool esVacioTramo(tramo t);

//Dada un tramo retorna el primer numero de ciudad
/* PRECONDICION: tramo NO vacío */
int primeroTramo(tramo t);

//Dada un tramo, borra el primer numero de la ciudad
/* PRECONDICION: tramo NO vacío */
void restoTramo(tramo &t);

//Dado un numero de ciudad, lo inserta al comienzo del tramo
void insFrontTramo(tramo &t, int ciudad);

//muestro por pantalla los tramos
void desplegarTramo(tramo t);

//dado un tramo y una ciudad retorna true en caso de que la ciudad pertence a ese tramo y false en caso contrario
bool perteneceTramo(tramo t, int ciudad);

//dado un tramo retorna el largo de dicho tramo
int largoTramo(tramo t);


#endif // TRAMO_H_INCLUDED
