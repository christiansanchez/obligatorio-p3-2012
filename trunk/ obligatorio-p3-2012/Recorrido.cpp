#include "Recorrido.h"
#include <stdio.h>


void CrearRecorrido (recorrido &r)
{ r.prim = NULL;
	r.ult = NULL;
}

bool RecorridoVacio (recorrido r)
{	return (bool) (r.prim==NULL && r.ult==NULL);
}

//Precondición: !Vacia(l)
parada PrimeraParada (recorrido r)
{	return r.prim->info_parada;
}

//Precondición: !Vacia(l)
parada UltimaParada (recorrido r)
{	return r.ult->info_parada;
}

//Precondición : !Vacia(l)
void RestoRecorrido (recorrido &r)
{	nodoR * aux = r.prim->sig;
	delete (r.prim);
	r.prim = aux;
	if (r.prim == NULL)
	{	r.ult = NULL;}
}

void InsertaOrigen (recorrido &r, parada p)//InsFront
{	nodoR * nuevo = new nodoR;
	nuevo->info_parada = p;
	nuevo->sig = r.prim;
	r.prim = nuevo;
	if (r.ult == NULL)
	r.ult = nuevo;
}

void InsertaDestino (recorrido &r, parada p)//InsBack
{	nodoR * nuevo = new nodoR;
	nuevo->info_parada = p;
	nuevo->sig = NULL;
	if (r.ult == NULL)
	{ r.ult = nuevo;
		r.prim = nuevo;
	}
	else
	{ r.ult->sig = nuevo;
		r.ult = nuevo;
	}
}

int CantParadasRecorrido(recorrido r)
{	int cont = 0;
	nodoR * aux = r.prim;
	while (aux->sig !=NULL)
	{ cont++;
		aux = aux->sig;
	}
	cont++;
	return cont;
}

void ListarRecorrido(recorrido r)
{	string nombre;
	nodoR * aux = r.prim;
	while (aux->sig !=NULL)
	{ printf("\nPARADA: %d",darNum_parada(aux->info_parada));
		printf("\nCIUDAD: %d",darNum_Ciudad_Parada(aux->info_parada));
		printf("\n---------------");
		aux = aux->sig;
	}
	printf("\nPARADA: %d",darNum_parada(aux->info_parada));
	printf("\nCIUDAD: %d",darNum_Ciudad_Parada(aux->info_parada));
	printf("\n= = = = = = = = = = :FIN DEL RECORRIDO");
}
