#include <stdlib.h>
#include <stdio.h>
#include "Ciudades.h"


int main()
{
    int opcion;
    pareja p;
    ciudades c;
    crearCiudades(c);
    string nombreCiudad;
    strcrear(nombreCiudad);

    do{
        printf("\n1) Agregar ciudad");
        printf("\n2) Saber si existe una ciudad");
        printf("\n3) Buscar una ciudad");
        printf("\n4) Listado de ciudades cargadas");
        printf("\n0) Para salir\n");
        scanf("%d",&opcion);

        switch(opcion){

            case 1: cargarPareja(p);
                    agregarInfoPareja(c,p);
                    break;
            case 2: printf("\nIngrese nombre de la ciudad: ");
                    cargarPareja(p);
                    if (existePareja(c,p) == true)
                        printf("\nLa ciudad existe");
                    else
                        printf("\nLa NO ciudad existe");
                    break;
            case 3: printf("\nIngrese nombre de la ciudad: ");
                    scan(nombreCiudad);
                    buscarPareja(c, nombreCiudad);
                    printf("\nNumero: %d", p.nombre_ciudad);
                    break;
            case 4: desplegarCiudades(c);
                    break;
            case 0:
                    break;
            default: printf("\n ERROR\n");
        }

    }
    while (opcion!= 0);

}
