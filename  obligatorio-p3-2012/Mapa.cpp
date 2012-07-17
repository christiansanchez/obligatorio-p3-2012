#include "mapa.h"
#include "Tramo.h"
#include <stdio.h>

void crearMapa(mapa &m)
{ int i;
  for(i=0;i<cant_ciudades;i++)
  { crearTramo(m[i]);
  }
}

void agregarTramo (mapa &m, int i, int j)
{	insFrontTramo (m[i],j);
	insFrontTramo (m[j],i);
}

int calcularGrado (mapa m, int i)
{   return(largoTramo(m[i]));
}

void listarCiudadesAdyacentes (mapa m, int i)
{  desplegarTramo(m[i]);
}

bool hayTramo (mapa m, int i, int j)
{ return(perteneceTramo(m[i],j));
}

bool esSimple (mapa m)
{   int i=0;
    while ((i<cant_ciudades) && (!perteneceTramo(m[i],i)))
    {   i++;
    }
    if (i == cant_ciudades)
        return true;
    else
        return false;
}

bool esCompleto (mapa m)
{   int i=0,j=1;
    bool es = false;
    if (esSimple(m))
    {   while ((i < cant_ciudades)&& hayTramo(m,i,j))
        {   while ((j<cant_ciudades) && hayTramo(m,i,j))
            {   es = true;
                j++;
            }
            i++;
        }
    }
    return es;
}

bool esRegular (mapa m)
{   int i = 1, aux;
    aux = calcularGrado(m,0);

    while ((i < cant_ciudades) && (aux = calcularGrado(m,i)))
    {   i++;
    }
    if (i == cant_ciudades)
        return true;
    else
        return false;
}
