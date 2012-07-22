#include "Menu.h"
#include <stdio.h>
//#include <conio.h>
//#include <iostream>
//#include<conio.h>
//#include <iostream>
//#include <stdio.h>
#include <stdlib.h>

void menu(int &op_elegida)
{
    system("cls");
    printf("\t\t\t######## MENU DE OPCIONES ########\n\n");
    printf("\t1 - Ingresar nuevo tramo entre dos ciudades.\n");
    printf("\t2 - Saber si hay un tramo entre dos ciudades.\n");
    printf("\t3 - Ingresar nueva linea.\n");
    printf("\t4 - Listado basico de lineas de la empresa.\n");
    printf("\t5 - Ingresar nueva parada al recorrido por codigo de linea.\n");
    printf("\t6 - Listado de paradas por codigo de linea.\n");
    printf("\t7 - Salir.\n");
    printf("\n\n\tOpcion seleccionada: ");
    scanf("%d",&op_elegida);
}


void despedida(int op)
{
    system("cls");
    printf("\n\n\n\n\t\t\t######## HASTA LA PROXIMA ########\n\n");
}

void cargarCiudades(ciudades &c, mapa &map)
{
    char op;
    pareja p;
    int cont = 1;
    Crear(map);
    bool continuar, op2 = true;
    do
    {
        printf("\t\t\t##### INGRESAR CIUDADES #####\n\n");
        cargarPareja(p,cont);
        if(!Member(c,p))
        {
            Insert(c, p);
            cont ++;
            printf("\nLa ciudad que ingreso fue registrada correctamente.");
        }
        else
        {
            printf("\nLa ciudad que ingreso ya se encuentra registrada.");
        }
        printf("\n\nDesea ingresar otra ciudad(S/N)??? ");
        scanf("%c",&op);
        do
        {
            system("cls");
            printf("\t\t\t##### INGRESAR CIUDADES #####\n\n");
            fflush(stdin);
            if(op=='N'||op=='n'||op=='s'||op=='S')
            {
                op2 = false;
            }
            else
            {
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\nDesea ingresar otra ciudad(S/N)??? ");
                scanf("%c",&op);
            }
        }while(op2);
        system("cls");
        if(op=='N'||op=='n')
        {
            continuar = false;
        }
    }while(continuar);
}

void opcion_uno(mapa &map, ciudades ciud)
{
    string ciudad1, ciudad2;
    int n_ciudad1, n_ciudad2, op;
    pareja p;
    do
    {
        strcrear(ciudad1);
        strcrear(ciudad2);
        system("cls");
        printf("\t\t\t##### INGRESAR TRAMO ENTRE CIUDADES #####\n\n");
        printf("Ingrese el nombre de la primera ciudad: ");
        fflush(stdin);
        scan(ciudad1);
        //consulto si la ciudad1 esta ingresada en el sistema
        if(Member(ciud, ciudad1))
        {
            printf("\n\nIngrese el nombre de la segunda ciudad: ");
            fflush(stdin);
            scan(ciudad2);
            //obtengo el numero correspondiente al nombre de la ciudad1
            p = Find(ciud, ciudad1);
            n_ciudad1 = darNumCiudad(p);
            //consulto si la ciudad2 esta ingresada en el sistema
            if(Member(ciud, ciudad2))
            {
                //obtengo el numero correspondiente al nombre de la ciudad2
                p = Find(ciud, ciudad2);
                n_ciudad2 = darNumCiudad(p);
                //consulto si ya no hay un tramo entre ellos ingresado
                if(PertenceArista(map, n_ciudad1, n_ciudad2))
                {
                    system("cls");
                    printf("\t\t\t##### INGRESAR TRAMO ENTRE CIUDADES #####\n\n");
                    printf("\n\tYa se encontraba ingresado en nuestro sistema el tramo entre ");
                    print(ciudad1);
                    printf(" y ");
                    print(ciudad2);
                }
                else
                {
                    system("cls");
                    printf("\t\t\t##### INGRESAR TRAMO ENTRE CIUDADES #####\n\n");
                    //ingreso el tramo al mapa
                    InsertarArista(map, n_ciudad1, n_ciudad2);
                    printf("\n\tEl tramo entre ");
                    print(ciudad1);
                    printf(" y ");
                    print(ciudad2);
                    printf(" fue ingresado correctamente.");
                }
            }
            else
            {
                printf("\nLa ciudad ");
                print(ciudad2);
                printf(" no se encuentra ingresada en nuestro sistema.");
            }
        }
        else
        {
            printf("\nLa ciudad ");
            print(ciudad1);
            printf(" no se encuentra ingresada en nuestro sistema.");
        }
        printf("\n\n\n\t1 - Ingresar otro tramo.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t\t\t##### INGRESAR TRAMO ENTRE CIUDADES #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Ingresar otro tramo.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }
    }while(op!=2);
}

void opcion_dos(mapa map, ciudades ciud)
{
    string ciudad1, ciudad2;
    int n_ciudad1, n_ciudad2, op;
    pareja p;
    do
    {
        strcrear(ciudad1);
        strcrear(ciudad2);
        system("cls");
        printf("\t\t\t##### CONSULTAR TRAMO ENTRE CIUDADES #####\n\n");
        printf("Ingrese el nombre de la primera ciudad: ");
        fflush(stdin);
        scan(ciudad1);
        //consulto si la ciudad1 esta ingresada en el sistema
        if(Member(ciud, ciudad1))
        {
            printf("\n\nIngrese el nombre de la segunda ciudad: ");
            fflush(stdin);
            scan(ciudad2);
            //obtengo el numero correspondiente al nombre de la ciudad1
            p = Find(ciud, ciudad1);
            n_ciudad1 = darNumCiudad(p);
            //consulto si la ciudad2 esta ingresada en el sistema
            if(Member(ciud, ciudad2))
            {
                //obtengo el numero correspondiente al nombre de la ciudad2
                p = Find(ciud, ciudad2);
                n_ciudad2 = darNumCiudad(p);
                //consulto si ya no hay un tramo entre ellos ingresado
                if(PertenceArista(map, n_ciudad1, n_ciudad2))
                {
                    system("cls");
                    printf("\t\t\t##### CONSULTAR TRAMO ENTRE CIUDADES #####\n\n");
                    printf("\n\tSe encuentra ingresado en nuestro sistema el tramo entre ");
                    print(ciudad1);
                    printf(" y ");
                    print(ciudad2);
                }
                else
                {
                    system("cls");
                    printf("\t\t\t##### CONSULTAR TRAMO ENTRE CIUDADES #####\n\n");
                    printf("\n\tNo se encuentra ingresado en nuestro sistema el tramo entre ");
                    print(ciudad1);
                    printf(" y ");
                    print(ciudad2);
                }
            }
            else
            {
                printf("\nLa ciudad ");
                print(ciudad2);
                printf(" no se encuentra ingresada en nuestro sistema.");
            }
        }
        else
        {
            printf("\nLa ciudad ");
            print(ciudad1);
            printf(" no se encuentra ingresada en nuestro sistema.");
        }
        printf("\n\n\n\t1 - Consultar otro tramo.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t\t\t##### CONSULTAR TRAMO ENTRE CIUDADES #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Consultar otro tramo.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }
    }while(op!=2);
}

void opcion_tres(mapa map, ciudades ciud, lineas &ls)
{
    system("cls");
    printf("\n\n\nEn construccion");
}

void opcion_cuatro(ciudades ciud, lineas ls)
{
    system("cls");
    printf("\n\n\nEn construccion");
}

void opcion_cinco(mapa map, ciudades ciud, lineas &ls)
{
    system("cls");
    printf("\n\n\nEn construccion");
}

void opcion_seis(ciudades ciud, lineas ls)
{
    system("cls");
    printf("\n\n\nEn construccion");
}


