#include "Pareja.h"
#include <stdio.h>

void cargarPareja(pareja &p)
{
    printf("Ingrese el numero de la ciudad: ");
    scanf("%d",&p.num_ciudad);
    printf("Ingrese el nombre de la ciudad: ");
    fflush(stdin);
    strcrear(p.nombre_ciudad);
    scan(p.nombre_ciudad);
}

int darNumCiudad(pareja p)
{
    return p.num_ciudad;
}

void darNombreCiudad(pareja p, string &nombreCiudad)
{
    strcop(nombreCiudad, p.nombre_ciudad);
}

void desplegarPareja(pareja p)
{
    string nombre;
    strcrear(nombre);
    darNombreCiudad(p,nombre);
    printf("El numero de la ciudad es: %d", darNumCiudad(p));
    printf("\nEl nombre de la ciudad es: ");
    print(nombre);
    printf("\n");
}

bool igualesPareja(pareja p1, pareja p2)
{
    string nomb_ciudad1;
    string nomb_ciudad2;
    darNombreCiudad(p1, nomb_ciudad1);
    darNombreCiudad(p2, nomb_ciudad2);
    return streq(nomb_ciudad1, nomb_ciudad2);
}

bool mayorPareja(pareja p1, pareja p2)
{
    string nomb_ciudad1;
    string nomb_ciudad2;
    darNombreCiudad(p1, nomb_ciudad1);
    darNombreCiudad(p2, nomb_ciudad2);
    return strmen(nomb_ciudad2, nomb_ciudad1);
}

bool igualNombreCiudad(pareja p, string c)
{
    string aux;
    darNombreCiudad(p, aux);
    return streq(aux, c);
}

bool mayorNombreCiudad(pareja p, string c)
{
    string aux;
    darNombreCiudad(p, aux);
    return strmen(c, aux);
}
