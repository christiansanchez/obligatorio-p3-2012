#include "Mapa.h"
#include <stdio.h>

int main_ya_probado9()
{
    mapa m;
    Crear(m);
    if(PertenceArista(m, 0, 1))
    {
        printf("\n\nLa arista 0-1 pertenece al mapa");
    }
    else
    {
        printf("\n\nLa arista 0-1 NO pertenece al mapa");
    }
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
            InsertarArista(m,j,i);
        }
    }
    if(PertenceArista(m, 0, 1))
    {
        printf("\n\nLa arista 0-1 pertenece al mapa");
    }
    else
    {
        printf("\n\nLa arista 0-1 NO pertenece al mapa");
    }
    if(PertenceArista(m, 9, 11))
    {
        printf("\n\nLa arista 9-11 pertenece al mapa");
    }
    else
    {
        printf("\n\nLa arista 9-11 NO pertenece al mapa");
    }

    printf("\n\nEl grado del vertice 0 es: %d",GradoVertice(m,0));

    printf("\n\nLas ciudades adyacentes al vertice 1 son:");
    listarCiudadesAdyacentes(m,1);
}
