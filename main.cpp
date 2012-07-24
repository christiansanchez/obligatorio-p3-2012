#include "Mapa.h"
#include "Lineas.h"
#include "Menu.h"
#include <iostream>
#include <stdio.h>
int main()
{
    int opcion;
    mapa map;
    lineas ls;
    ciudades ciud;
    Make(ciud);
    Make(ls);
    cargarCiudades(ciud, map);
    do
    {
        menu(opcion);
        switch(opcion)
        {
            case 1:
            {
                opcion_uno(map, ciud);
                break;
            }
            case 2:
            {
                opcion_dos(map, ciud);
                break;
            }
            case 3:
            {
                opcion_tres(map, ciud, ls);
                break;
            }
            case 4:
            {
                opcion_cuatro(ciud, ls);
                break;
            }
            case 5:
            {
                opcion_cinco(map, ciud, ls);
                break;
            }
            case 6:
            {
                opcion_seis(ciud, ls);
                break;
            }
            case 7:
            {
                despedida(opcion);
                break;
            }
        }
    }while(opcion != 7);
}
