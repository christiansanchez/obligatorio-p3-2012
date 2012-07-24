#include "Pareja.h"
#include <stdio.h>

void cargarPareja(pareja &p, int num_ciudad)
{
    fflush(stdin);
    p.num_ciudad = num_ciudad;
    printf("\nIngrese el nombre de la ciudad que desea registrar: ");
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
    strcrear(nombreCiudad);
    strcop(nombreCiudad, p.nombre_ciudad);
}

void desplegarPareja(pareja p)
{
    string nombre;
    strcrear(nombre);
    printf("El numero de la ciudad es: %d", darNumCiudad(p));
    printf("\nEl nombre de la ciudad es: ");
    darNombreCiudad(p,nombre);
    print(nombre);
    printf("\n");
}

bool igualesPareja(pareja p1, pareja p2)
{
    string nomb_ciudad1;
    string nomb_ciudad2;
    strcrear(nomb_ciudad1);
    strcrear(nomb_ciudad2);
    darNombreCiudad(p1, nomb_ciudad1);
    darNombreCiudad(p2, nomb_ciudad2);
    return streq(nomb_ciudad1, nomb_ciudad2);
}

bool mayorPareja(pareja p1, pareja p2)
{
    string nomb_ciudad1;
    string nomb_ciudad2;
    strcrear(nomb_ciudad1);
    strcrear(nomb_ciudad2);
    darNombreCiudad(p1, nomb_ciudad1);
    darNombreCiudad(p2, nomb_ciudad2);
    return strmen(nomb_ciudad2, nomb_ciudad1);
}

bool igualNombreCiudad(pareja p, string c)
{
    string aux;
    strcrear(aux);
    darNombreCiudad(p, aux);
    return streq(aux, c);
}

bool mayorNombreCiudad(pareja p, string c)
{
    string aux;
    strcrear(aux);
    darNombreCiudad(p, aux);
    return strmen(c, aux);
}

