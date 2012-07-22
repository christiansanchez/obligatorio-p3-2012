#include "String.h"

int main_ya_probado1()
{
    char * prueba;
    char * prueba2;
    printf("Cargar primer string dinamico....\n");
    scan(prueba);
    printf("\n\nEl string contiene: \n");
    print(prueba);

    printf("\n\nLargo del string: %d",strlar(prueba));


    printf("\n\nCargar segundo string dinamico....\n");
    scan(prueba2);
    printf("\n\nEl string contiene: \n");
    print(prueba2);

    printf("\n\nLargo del string: %d", strlar(prueba2));


    printf ("\nAntes: string1:");
    print(prueba);
    printf("  string2:");
    print(prueba2);
    strswp(prueba, prueba2);
    printf ("\nDespues: string1:");
    print(prueba);
    printf("  string2:");
    print(prueba2);


    if(streq(prueba,prueba2))
    {
        printf("\nLos dos string son iguales");
    }
    else
    {
        printf("\nLos string son diferentes");
    }

    if (strmen(prueba,prueba2))
    {
        printf("\nEl primero es menor");
    }
    else
    {
        printf("\nEl segundo es menor");
    }

    strcon(prueba, prueba2);
    printf("\n\nConcatenacion:  ");
    print(prueba);

}
