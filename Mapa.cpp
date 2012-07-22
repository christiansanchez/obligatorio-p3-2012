#include "Tramo.h"
#include <stdio.h>

const int cant_ciudades = 100;/*cantidad de ciudades para prueba*/
typedef tramo mapa[cant_ciudades];

void Crear(mapa &m)
{
    for(int i=0; i<cant_ciudades; i++)
    {
        crearTramo(m[i]);
    }
}
/*
bool PerteneceVertice(mapa m, int i)
{

}*/

bool PertenceArista(mapa m, int i, int j)
{
    return perteneceTramo(m[i],j);
}

/*void InsertarVertice(mapa &m, int v)
{

}*/

void InsertarArista(mapa &m, int v1, int v2)
{
    insFrontTramo(m[v1],v2);
    if (v1 != v2)
    {
        insFrontTramo(m[v2],v1);
    }
}

int GradoVertice(mapa m, int v)
{
    int cont = largoTramo(m[v]);
    if (!perteneceTramo(m[v],v))
    {
        return cont;
    }
    else
    {
        return (cont+1);
    }
}

void listarCiudadesAdyacentes (mapa m, int ciu1)
{
    desplegarTramo(m[ciu1]);
}

void DFS (mapa map,int ciu1, int ciuActual, bool visitado[cant_ciudades],bool existe)
{
    tramo aux;
	visitado[ciuActual] = true;
	aux = map[ciuActual];
	while (aux!=NULL)
	{  if (!visitado[aux->num_ciudad_tramo])
		{
		    DFS (map,ciu1,aux->num_ciudad_tramo,visitado,existe);
		}
		aux = aux->sig;
	}
	if(ciuActual==ciu1)
		existe=true;
}

