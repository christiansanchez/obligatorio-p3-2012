#include "Tramo.h"
#include <stdio.h>

int main_ya_probado8()
{
    tramo t;
    crearTramo(t);
    if(esVacioTramo(t))
    {
        printf("El tramo es vacio\n\n");
    }
    for(int i=0;i<10;i++)
    {
        insFrontTramo(t,i);
    }
    if(!esVacioTramo(t))
    {
        printf("El tramo ya no es vacio\n\n");
    }
    printf("El tramo tiene un largo de: %d",largoTramo(t));
    printf("\n\nEl tramo es:");
    desplegarTramo(t);
    if(perteneceTramo(t, 11))
    {
        printf("\n\nEl 11 pertence al tramo");
    }
    else
    {
         printf("\n\nEl 11 NO pertence al tramo");
    }
    if(perteneceTramo(t, 1))
    {
        printf("\n\nEl 1 pertence al tramo");
    }
    else
    {
         printf("\n\nEl 1 NO pertence al tramo");
    }
}
