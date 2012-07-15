#include "Tramo.h"
#include <stdio.h>

void crearTramo(tramo &t)
{
    t = NULL;
}

bool esVacioTramo(tramo t)
{
    return (t==NULL);
}

int primeroTramo(tramo t)
{
    return t->num_ciudad_tramo;
}

void restoTramo(tramo &t)
{
    tramo aux;
    aux = t;
    t = t->sig;
    delete aux;
}

void insFrontTramo(tramo &t, int ciudad)
{
    tramo aux;
    aux = new nodoTramo;
    aux->num_ciudad_tramo = ciudad;
    aux->sig = t;
    t = aux;
}

void desplegarTramo(tramo t)
{
    if(!esVacioTramo(t))
    {
        printf("%d",primeroTramo(t));
        desplegarTramo(t->sig);
    }
}

bool perteneceTramo(tramo t, int ciudad)
{
    if(esVacioTramo(t))
    {
        return false;
    }
    else
    {
        if(primeroTramo(t)==ciudad)
        {
            return true;
        }
        else
        {
            return perteneceTramo(t->sig, ciudad);
        }
    }
}

int largoTramo(tramo t)
{
    if(esVacioTramo(t))
    {
        return 0;
    }
    else
    {
        return 1 + largoTramo(t->sig);
    }
}

