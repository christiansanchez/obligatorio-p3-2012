#include "Pareja.h"
#include <stdio.h>

int main_ya_probado2()
{
    pareja p1, p2;
    printf("\n    PROBANDO CARGAR PAREJAS\n");
    cargarPareja(p1,9);
    cargarPareja(p2,2);

    printf("\n   DESPLEGANDO PAREJAS\n");
    printf("P1:\n");
    desplegarPareja(p1);
    printf("\nP2:\n");
    desplegarPareja(p2);

    if (igualesPareja(p1,p2))
    {
        printf("\nlas parejas son iguales");
    }
    else
    {
        printf("\nlas parejas son distintas");
    }

    if (mayorPareja(p1,p2))
    {
        printf("\nprimer pareja mayor que la segunda");
    }
    else
    {
        printf("\nsegunda pareja mayor");
    }

    string c1;
    strcrear(c1);
    printf("\nIngrese un nombre de ciudad: ");
    fflush(stdin);
    scan(c1);

    if (igualNombreCiudad(p1,c1))
    {
        printf("\n p1 y c1 tienen el mismo nombre");
    }
    else
    {
        printf("\np1 y c1 no tienen el mismo nombre");
    }

    if (igualNombreCiudad(p2,c1))
    {
        printf("\n p2 y c1 tienen el mismo nombre");
    }
    else
    {
        printf("\np2 y c1 no tienen el mismo nombre");
    }

    if (mayorNombreCiudad(p2,c1))
    {
        printf("\n p2 tiene mayor nombre que c1");
    }
    else
    {
        printf("\nc1 tiene mayor nombre que p2");
    }


    if (mayorNombreCiudad(p1,c1))
    {
        printf("\n p1 tiene mayor nombre que c1");
    }
    else
    {
        printf("\nc1 tiene mayor nombre que p1");
    }


}
