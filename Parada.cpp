#include "Parada.h"

void cargarParada(parada &p, int numero, int num_ciudad)
{   p.num_parada = numero;
    p.num_ciudad_parada = num_ciudad;
}

int darNum_parada(parada p)
{   return p.num_parada;
}

int darNum_Ciudad_Parada(parada p)
{   return p.num_ciudad_parada;
}

