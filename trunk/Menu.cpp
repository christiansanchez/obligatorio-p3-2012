#include "Menu.h"
#include <stdio.h>

void menu(int &op_elegida)
{
    printf("######## MENU DE OPCIONES ########\n");
    printf("1 - Ingresar nuevo tramo entre dos ciudades.\n");
    printf("2 - Saber si hay un tramo entre dos ciudades.\n");
    printf("3 - Ingresar nueva linea.\n");
    printf("4 - Listado basico de lineas de la empresa.\n");
    printf("5 - Ingresar nueva parada al recorrido por codigo de linea.\n");
    printf("6 - Listado de paradas por codigo de linea.\n");
    printf("\nOpcion seleccionada: ");
    scanf(op_elegida);
}
