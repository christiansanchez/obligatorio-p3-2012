#include "Lineas.h"
#include <stdio.h>

int main_ya_probado7()
{
    ciudades c;
    pareja p;
    Make(c);
    for(int j=0; j<8;j++)
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
    recorrido r;
    printf("\nCreo Recorrido\n\n");
    Crear(r);
    printf("\nAgrego paradas a los recorridos\n");
    parada p1, p2, p3;
    cargarParada(p1, 1, 1);
    cargarParada(p2, 2, 2);
    cargarParada(p3, 3, 3);
    if(Esvacia(r))
    {
        printf("\nRecorrido vacio, se agregan paradas a recorrido\n");
        InsFront(r, p1);
        InsFront(r, p2);
        InsFront(r, p3);
    }
    printf("\nListar recorridos\n");
    //ListarRecorrido(r, c);

    printf("\n---------------------------------------------");
    printf("\n---------------------------------------------");
    printf("\n---------------------------------------------");
    linea l;
    cargarLinea(l,r);
    printf("\n---------------------------------------------");
    //desplegarDatosBasicos(l, c);

    printf("\n########################################");
    printf("\n########################################");
    recorrido r1;
    printf("\nCreo Recorrido\n\n");
    Crear(r1);

    cargarParada(p1, 4, 4);
    cargarParada(p2, 5, 5);
    cargarParada(p3, 6, 6);
    if(Esvacia(r1))
    {
        printf("\nRecorrido vacio, se agregan paradas a recorrido\n");
        InsFront(r1, p1);
        InsFront(r1, p2);
        InsFront(r1, p3);
    }
    printf("\nListar recorridos\n");
    //ListarRecorrido(r1, c);
    linea l1;
    cargarLinea(l1,r1);
    //desplegarDatosBasicos(l1, c);
    printf("\n\n\n·········································································");
    printf("\n\n\n·········································································");
    //pruebas de lineas------------------------------------
    lineas ls;
    printf("\nCreo lineas");
    Make(ls);
    printf("\nInserto linea y linea1 a lineas");
    Insert(ls, l);
    Insert(ls, l1);

    string aux;
    strcrear(aux);
    printf("\nIngrese un codigo de alguna linea: ");
    fflush(stdin);
    scan(aux);
    if(Member(ls, aux))
    {
        printf("\nEse codigo de linea existe");
    }
    else
    {
        printf("\nEse codigo de linea NO existe");
    }

    printf("\nIngrese otro codigo de alguna linea: ");
    fflush(stdin);
    scan(aux);
    if(Member(ls, aux))
    {
        printf("\nEse codigo de linea existe");
    }
    else
    {
        printf("\nEse codigo de linea NO existe");
    }
    printf("\n\nMuestro los datos de todas las lineas");
    //desplegarLineas(ls, c);

}





