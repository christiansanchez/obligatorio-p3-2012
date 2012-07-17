#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Parada.h"

using namespace std;

void CargarOpcion(char &opcion)
{   printf("Ingrese Opcion : ");
    fflush(stdin);
    scanf("%c",&opcion);
}

void menuGral(char &opcion)
{  printf ("\n---------------*** MENU PRUEBA MODULO PARADA ***----------------------\n");
   printf("\n1- Cargar Parada");
   printf("\n2- Devuelve Num parada");
   printf("\n3- Devuelve Num iudad");
   printf("\n\n'S'- SALIR");
   printf ("\n----------------------------------------------------------------------\n");
   CargarOpcion(opcion);
}

int main()
{   char op;
    char opExp;
    int num_parada, num_ciudad;
    parada p;
   do
   {  system("cls");
      menuGral(op);
      fflush(stdin);
      switch (op)
      {	 case '1': {system("cls");
                    printf("\nSolo a los efectos de tener datos, la carga se hace en Recorrido\n");
                    printf ("\nIngrese el numnero de parada: ");
                    scanf ("%d", &num_parada);
                    printf ("\nIngrese el numero de ciudad: ");
                    scanf ("%d", &num_ciudad);
                    cargarParada(p,num_parada,num_ciudad);
                    getch();
                    break;}
         case '2': {system("cls");
                    printf("PARADA Num %d",darNum_parada(p));
                    getch();
                    break;}
         case '3': {system("cls");
                    printf("CIUDAD Num %d",darNum_Ciudad_Parada(p));
                    getch();
                    break;}
      }
   } while ((op != 'S') && (op!='s'));
    return 0;
}
