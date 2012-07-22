#include "Recorrido.h"
#include <stdio.h>

int main_ya_probado5()
{
    ciudades c;
    pareja p;
    Make(c);
    for(int j=0; j<4;j++)
    {
        printf("\nCARGO PAREJA %d:\n",j);
        cargarPareja(p,j);
        if(!Member(c,p))
        {
            printf("\nInserto en Ciudades\n");
            Insert(c, p);
        }
        else
        {
            printf("\nEsa pareja ya existe");
        }
    }
    printf("\n\n");
    desplegarCiudades(c);
    printf("\n\n");
    printf("\n\n");
    //----------------------------------------------------------------------------
    recorrido r;
    printf("\nCreo Recorrido\n\n");
    Crear(r);
    printf("\nAgrego paradas a los recorridos\n");
    parada p1, p2, p3;
    cargarParada(p1, 0, 0);
    cargarParada(p2, 1, 1);
    cargarParada(p3, 2, 2);
    if(Esvacia(r))
    {
        printf("\nRecorrido vacio, se agregan paradas a recorrido\n");
        InsFront(r, p1);
        InsFront(r, p2);
        InsFront(r, p3);
    }
    printf("\nListar recorridos\n");
    ListarRecorrido(r, c);
}
