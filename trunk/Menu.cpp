#include "Menu.h"
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

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
    int cont = 0;
    bool continuar = true;
    bool op2 = true;
    Crear(map);
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
        else
        {
            if(cont==cant_ciudades)
            {
                printf("\t\t\t##### INGRESAR CIUDADES #####\n\n");
                printf("\n\tSe alcanzo el maximo de ciudades permitidas");
                printf ("\n\n\tPresione enter para continuar.");
                getch();
            }
        }
    }while(continuar&&(cont<cant_ciudades));
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
        if(Member(ciud, ciudad1))
        {
            printf("\n\nIngrese el nombre de la segunda ciudad: ");
            fflush(stdin);
            scan(ciudad2);
            p = Find(ciud, ciudad1);
            n_ciudad1 = darNumCiudad(p);
            if(Member(ciud, ciudad2))
            {
                p = Find(ciud, ciudad2);
                n_ciudad2 = darNumCiudad(p);
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
        if(Member(ciud, ciudad1))
        {
            printf("\n\nIngrese el nombre de la segunda ciudad: ");
            fflush(stdin);
            scan(ciudad2);
            p = Find(ciud, ciudad1);
            n_ciudad1 = darNumCiudad(p);
            if(Member(ciud, ciudad2))
            {
                p = Find(ciud, ciudad2);
                n_ciudad2 = darNumCiudad(p);
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
    string codigo;
    linea l;
    int op;
    bool ok = true;
    do
    {
        system("cls");
        printf("\t\t\t##### INGRESAR NUEVA LINEA A LA EMPRESA #####\n\n");
        strcrear(codigo);
        printf("\nIngrese el codigo de la nueva linea que desea ingresada al sistema: ");
        fflush(stdin);
        scan(codigo);
        if(!Member(ls,codigo))
        {
            cargarLinea(l, ciud, codigo, ok);
            if(ok)
            {
                if(PertenceArista(map, darNumDestino(l), darNumOrigen(l)))
                {
                        Insert(ls, l);
                        system("cls");
                        printf("\t\t\t##### INGRESAR NUEVA LINEA A LA EMPRESA #####\n\n");
                        printf("\n\tSe ingreso correctamente la nueva linea al sistema.");
                }
                else
                {
                    system("cls");
                    printf("\t\t\t##### INGRESAR NUEVA LINEA A LA EMPRESA #####\n\n");
                    printf("\n\tNo existe un tramo que una dichas ciudades.");
                }
            }
            else
            {
                system("cls");
                printf("\t\t\t##### INGRESAR NUEVA LINEA A LA EMPRESA #####\n\n");
                printf("\n\tNo se pudo ingresar la nueva linea al sistema.");
            }
        }
        else
        {
            printf("\nSe encuentra ya registrada una linea con el codigo ");
            print(codigo);
            printf(" en el sistema.");
        }
        printf("\n\n\n\t1 - Agregar nueva linea.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t\t\t##### INGRESAR NUEVA LINEA A LA EMPRESA #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Agregar nueva linea.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }
    }while(op!=2);

}

void opcion_cuatro(ciudades ciud, lineas ls)
{
    int op;
    do
    {
        system("cls");
        printf("\t##### LISTADO DE TODAS LAS LINEAS DE LA EMPRESA EN EL SISTEMA #####\n\n");
        desplegarLineas(ls, ciud);
        printf("\n\n\n\t1 - Listar nuevamente todas las lineas.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t##### LISTADO DE TODAS LAS LINEAS DE LA EMPRESA EN EL SISTEMA #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Listar nuevamente todas las lineas.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }
    }while(op!=2);
}

void opcion_cinco(mapa map, ciudades ciud, lineas &ls)
{
    string codigo, nomb_parada, nomb_dest;
    pareja p;
    linea l;
    int op, num_c_parada, num_dest;
    do
    {
        system("cls");
        printf("\t\t\t##### INGRESAR PARADA SEGUN CODIGO DE LINEA #####\n\n");
        strcrear(codigo);
        printf("\nIngrese el codigo de la linea a la que va a ingresar una parada: ");
        fflush(stdin);
        scan(codigo);
        if(Member(ls,codigo))
        {
            strcrear(nomb_parada);
            printf("\nIngrese el nombre de la nueva parada a ingresar: ");
            fflush(stdin);
            scan(nomb_parada);
            if(Member(ciud, nomb_parada))
            {
                p = Find(ciud, nomb_parada);
                num_c_parada = darNumCiudad(p);
                l = Find(ls, codigo);
                num_dest = darNumDestino(l);
                if(PertenceArista(map, num_c_parada, num_dest))
                {
                    agregarParada(l, num_c_parada);
                    Modify(ls,l);
                    printf("\nSe ingreso correctamente la nueva parada ");
                    print(nomb_parada);
                    printf(" a la linea ");
                    print(codigo);
                    printf(".");
                }
                else
                {
                    printf("\nNo existe un tramo que una la ciudad de ");
                    print(nomb_parada);
                    printf( " con ");
                    p = Find(ciud, num_dest);
                    strcrear(nomb_dest);
                    darNombreCiudad(p, nomb_dest);
                    print(nomb_dest);
                    printf(".");
                }
            }
            else
            {
                printf("\nLa ciudad ");
                print(nomb_parada);
                printf(" no se encuentra ingresada en nuestro sistema.");
            }
        }
        else
        {
            printf("\nNo se encuentra ninguna linea en el sistema con el codigo ");
            print(codigo);
            printf(".");
        }
        printf("\n\n\n\t1 - Agregar otra parada.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t\t\t##### INGRESAR PARADA SEGUN CODIGO DE LINEA #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Agregar otra parada.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }

    }while(op!=2);
}

void opcion_seis(ciudades ciud, lineas ls)
{
    string codigo;
    strcrear(codigo);
    linea l;
    int op;
    do
    {
        system("cls");
        printf("\t##### LISTADO DE PARADAS CORRESPONDIENTE A UNA LINEA #####\n\n");
        printf("\nIngrese el codigo de la linea que desea listar: ");
        fflush(stdin);
        scan(codigo);
        if(Member(ls, codigo))
        {
            l =  Find(ls, codigo);
            system("cls");
            printf("\t##### LISTADO DE PARADAS CORRESPONDIENTE A UNA LINEA #####\n\n");
            printf("\n\t***** Listado de paradas correspondientes a la linea ");
            print(codigo);
            printf(" *****\n");
            desplegarParadas(l, ciud);
        }
        else
        {
            printf("\n\tEl codigo ");
            print(codigo);
            printf(" no pertenece a ninguna linea ingresada en el sistema.");
        }
        printf("\n\n\n\t1 - Listar nuevamente paradas de una linea.");
        printf("\n\n\t2 - Volver a menu principal.");
        printf("\n\n\tOpcion seleccionada: ");
        scanf("%d",&op);
        while(op>2||op<1)
        {
                system("cls");
                printf("\t##### LISTADO DE PARADAS CORRESPONDIENTE A UNA LINEA #####\n\n");
                printf("\nLa opcion elegida es incorrecta. Intentelo nuevamente");
                printf("\n\n\n\t1 - Listar nuevamente paradas de una linea.");
                printf("\n\n\t2 - Volver a menu principal.");
                printf("\n\n\tOpcion seleccionada: ");
                scanf("%d",&op);
        }
    }while(op!=2);
}


