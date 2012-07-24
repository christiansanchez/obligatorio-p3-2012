#include "Recorrido.h"
#include <stdio.h>

void Crear(recorrido &r)
{
    r.prim = NULL;
	r.ult = NULL;
}

void InsFront(recorrido &r, parada p)
{
    nodoR * nuevo = new nodoR;
	nuevo->info_parada = p;
	nuevo->sig = r.prim;
	r.prim = nuevo;
	if (r.ult == NULL)
	r.ult = nuevo;
}

bool Esvacia(recorrido r)
{
    return (bool)(r.prim==NULL && r.ult==NULL);
}

parada Primero(recorrido r)
{
    return r.prim->info_parada;
}

void Resto(recorrido &r)
{	nodoR * aux = r.prim->sig;
	delete (r.prim);
	r.prim = aux;
	if (r.prim == NULL)
	{
	    r.ult = NULL;
    }
}

int Largo(recorrido r)
{	int cont = 0;
	nodoR * aux = r.prim;
	while (aux->sig !=NULL)
	{
	    cont++;
		aux = aux->sig;
	}
	cont++;
	return cont;
}

parada Ultimo (recorrido r)
{
    return r.ult->info_parada;
}

void InsBack(recorrido &r, parada p)//InsBack
{	nodoR * nuevo = new nodoR;
	nuevo->info_parada = p;
	nuevo->sig = NULL;
	if (r.ult == NULL)
	{
	    r.ult = nuevo;
		r.prim = nuevo;
	}
	else
	{
	    r.ult->sig = nuevo;
		r.ult = nuevo;
	}
}

bool Pertenece (recorrido r, parada p)
{
    bool esta = false;
	while ((r.prim != NULL) && (!esta))
	{
	    if (darNum_parada(r.prim->info_parada) == darNum_parada(p))
			esta = true;
		else
			r.prim = r.prim->sig;
	}
	return esta;
}

void ListarRecorrido(recorrido r,ciudades ciu)
{
    string nombre;
	int numciu;
	nodoR * aux = r.prim;
	while (aux->sig !=NULL)
	{
	    printf("\n\tPARADA: %d",darNum_parada(aux->info_parada));
		numciu = darNum_Ciudad_Parada(aux->info_parada);
		darNombreCiudad(Find(ciu, numciu), nombre);
		printf(" - CIUDAD: ");
		print(nombre);
		aux = aux->sig;
	}
	printf("\n\tPARADA: %d",darNum_parada(aux->info_parada));
	numciu=darNum_Ciudad_Parada(aux->info_parada);
    darNombreCiudad(Find(ciu, numciu),nombre);
	printf(" - CIUDAD: ");
	print(nombre);
}
