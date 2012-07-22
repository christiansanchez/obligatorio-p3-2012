#include "Ciudades.h"
#include <stdio.h>

int main_ya_probado3()
//int main()
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
    printf("\nLAS CIUDADES SON:");
    desplegarCiudades(c);
/*
int aux;
printf("\nIngrese un numero de ciudad: ");
scanf("%d",&aux);
printf("\n%d\n",aux);
if(Member(c, aux))
{
    printf("\nEse numero de ciudad ya existe");
}
else
{
    printf("\nEse numero de ciudad no existe");
}

printf("\nIngrese otro numero de ciudad: ");
scanf("%d",&aux);
printf("\n%d\n",aux);
if(Member(c, aux))
{
    printf("\nEse numero de ciudad ya existe");
}
else
{
    printf("\nEse numero de ciudad no existe");
}
*/

string aux_s;
strcrear(aux_s);
printf("\nIngrese un nombre:");
fflush(stdin);
scan(aux_s);
if(Member(c, aux_s))
{
    printf("\nEse nombre de ciudad ya existe");
}
else
{
    printf("\nEse nombre de ciudad no existe");
}

printf("\nIngrese otro nombre:");
fflush(stdin);
scan(aux_s);
if(Member(c, aux_s))
{
    printf("\nEse nombre de ciudad ya existe");
}
else
{
    printf("\nEse nombre de ciudad no existe");

}

}
