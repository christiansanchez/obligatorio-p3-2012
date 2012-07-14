#include "Pareja.h"
#include <stdio.h>



void cargarPareja(pareja &p)
{
    printf("Ingrese el numero de la ciudad: ");
    scanf("%d",&p.num_ciudad);
    fflush(stdin);
    printf("Ingrese el nombre de la ciudad: ");
    scan(p.nombre_ciudad);
}

int darNum_ciudad(pareja p)
{
    return p.num_ciudad;
}

void DarNombreCiudad(pareja p, string &nombreCiudad)
{
    strcop(nombreCiudad, p.nombre_ciudad);
}

void mostrarPareja(pareja p)
{
    string nombre;
    strcrear(nombre);
    DarNombreCiudad(p,nombre);
    printf("El numero de la ciudad es: %d", darNum_ciudad(p));
    printf("\nEl nombre de la ciudad es: ");
    print(nombre);
}
