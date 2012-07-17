#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Recorrido.h"
#include "Parada.h"

using namespace std;

void CargarOpcion(char &opcion)
{   printf("Ingrese Opcion : ");
    fflush(stdin);
    scanf("%c",&opcion);
}

void menuGral(char &opcion)
{  printf ("\n-------------*** MENU PRUEBA MODULO RECORRIDO ***---------------------\n");
   printf("\n1- Crear Recorrido    (ATENCION, se debe crear primero el Recorrido!!)");
   printf("\n2- Recorrido vacio?");
   printf("\n3- Primera Parada");
   printf("\n4- Ultima Parada");
   printf("\n5- Resto de Recorrido");
   printf("\n6- Inserta Origen");
   printf("\n7- Inserta Destino");
   printf("\n8- Cantidad de paradas del Recorrido");
   printf("\n9- Listar paradas del Recorrido");
   printf("\n\n'a'- Funcion carga masiva para pruebas");
   printf("\n'S'- SALIR");
   printf ("\n----------------------------------------------------------------------\n");
   CargarOpcion(opcion);
}

int main()
{   char op;
    char opExp;
    int num_parada, num_ciudad;
    recorrido r;
    parada p;
   do
   {  system("cls");
      menuGral(op);
      fflush(stdin);
      switch (op)
      {	 case '1': {system("cls");
                    printf("\n-Crea un recorrido vacío\n");
                    CrearRecorrido(r);
                    getch();
                    break;}
         case '2': {system("cls");
                    if (RecorridoVacio(r))
											printf("Recorrido VACIO!");
										else
											printf("Recorrido con paradas ingresadas !");
                    getch();
                    break;}
         case '3': {system("cls");
                    if (RecorridoVacio(r))
											printf("Recorrido VACIO!");
										else
										{	printf("La primera parada (Origen) es: \n\n");
											printf("PARADA Num %d \n",darNum_parada(PrimeraParada(r)));
											printf("CIUDAD Num %d",darNum_Ciudad_Parada(PrimeraParada(r)));
										}
                    getch();
                    break;}
         case '4': {system("cls");
                    if (RecorridoVacio(r))
											printf("Recorrido VACIO!");
										else
										{	printf("La ultima parada (Destino) es: \n\n");
											printf("PARADA Num %d \n",darNum_parada(UltimaParada(r)));
											printf("CIUDAD Num %d",darNum_Ciudad_Parada(UltimaParada(r)));
										}
                    getch();
                    break;}
         case '5': {system("cls");
                    printf("A los efectos de ver si borra bien el primer elemento se lista solo los numeros de paradas");
                    RestoRecorrido(r);
                    // rutina para mostrar recorrido sin la primer Parada
										nodoR * aux = r.prim;
										while (aux->sig !=NULL)
										{ printf(" %d - ",darNum_parada(aux->info_parada));
											aux = aux->sig;
										}
										printf(" %d - ",darNum_parada(aux->info_parada));
                    getch();
                    break;}
         case '6': {system("cls");
                    printf("\n-Solo a los efectos de tener datos, se hace en otro modulo");
                    printf("\n-Se asume que los controles de integridad fueron hechos\n");
                    printf ("\nIngrese el numnero de parada: ");
                    scanf ("%d", &num_parada);
                    printf ("\nIngrese el numero de ciudad: ");
                    scanf ("%d", &num_ciudad);
                    cargarParada(p,num_parada,num_ciudad);
                    InsertaOrigen(r,p);
                    getch();
                    break;}
         case '7': {system("cls");
                    printf("\n-Solo a los efectos de tener datos, se hace en otro modulo");
                    printf("\n-Se asume que los controles de integridad fueron hechos\n");
                    printf ("\nIngrese el numnero de parada: ");
                    scanf ("%d", &num_parada);
                    printf ("\nIngrese el numero de ciudad: ");
                    scanf ("%d", &num_ciudad);
                    cargarParada(p,num_parada,num_ciudad);
                    InsertaDestino(r,p);
                    getch();
                    break;}
         case '8': {system("cls");
                    if (RecorridoVacio(r))
											printf("Recorrido VACIO!");
										else
											printf("Recorrido con %d paradas ingresadas !",CantParadasRecorrido(r));
                    getch();
                    break;}
         case '9': {system("cls");
                    printf("\n-Solo a los efectos de mostrar datos, se muestra num.de ciudad, \n");
                    printf("FALTA FUNCION QUE DEVUELVE NOMBRE x Num.de ciudad\n");
                    if (RecorridoVacio(r))
											printf("Recorrido VACIO!");
										else
											ListarRecorrido(r);
                    getch();
                    break;}
         case 'a':case'A': {system("cls");
										printf("\n-FUNCION QUE CARGA UN RECORRIDO DE 7 PARADAS PARA TENER DATOS PRUEBA");
										printf("\n\n-Se cargaron paradas 1-11, 2-22, 3-33,..,7-77");
										CrearRecorrido(r);
										nodoR * aux;
										parada pa;
//										cargarParada(pa,1,11);
										for (int i=1; i<8; i++)
										{	aux = new nodoR;
											cargarParada(pa,i,(i*10)+i);
											aux->info_parada = pa;
											aux->sig = NULL;
											if(r.prim==NULL)
											{   r.prim= aux;
													r.ult=aux;
											}
											else
											{	r.ult->sig =aux;
												r.ult= aux;
											}
										}
                    getch();
                    break;}
      }
      if ((op != 'S') && (op !='s'))
      {	printf ("\n\n<Presione ENTER para continuar>");
				getch();
      }
   } while ((op != 'S') && (op!='s'));
    return 0;
}
