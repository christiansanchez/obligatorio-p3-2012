#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "Mapa.h"
#include "Tramo.h"


void CargarOpcion(char &opcion)
{   printf("Ingrese Opcion : ");
    fflush(stdin);
    scanf("%c",&opcion);
}

void menuGral(char &opcion)
{  printf ("\n---------------*** MENU PRUEBA MODULO MAPA ***------------------------\n");
   printf("\n1-Crear Mapa");
   printf("\n2-Agregar un tramo entre 2 ciudades");
   printf("\n3-Calcular el grado de una ciudad");
   printf("\n4-Listar en pantalla las ciudades adyacentes");
   printf("\n5-Hay tramo entre dos ciudades ?");
   printf("\n6-Es grafo Simple");
   printf("\n7-Es grafo Completo");
   printf("\n8-Es grafo Regular");
   printf("\n\nA-Carga Rapida");
   printf("\nS-Salir\n");
   printf ("\n----------------------------------------------------------------------\n");
   CargarOpcion(opcion);
}


int main()
{   mapa map;
    char op;
    char opExp;
    int ciu1, ciu2;

   do
   {  system("cls");
      menuGral(op);
      fflush(stdin);
      switch (op)
      {	 case '1':{crearMapa (map);
                    system("cls");
                    printf ("\nSE CREO EL MAPA\n\n");
                    printf ("<Presione ENTER para continuar>");
                    getch();
                    break;}
				 case '2':{system("cls");
										printf ("Ingrese las ciudades que unira con un tramo: ");
										printf ("\nIngrese la primer ciudad: ");
										scanf ("%d", &ciu1);
										printf ("\nIngrese la segunda ciudad: ");
										scanf ("%d", &ciu2);
										agregarTramo (map, ciu1, ciu2);
										printf ("\n\n<Presione ENTER para continuar>");
										getch();
										break;}
				 case '3':{system("cls");
									 printf ("Ingrese la ciudad que desea calcular el grado: ");
									 scanf ("%d", &ciu1);
									 printf ("\nEl grado de la ciudad %d es: %d", ciu1,calcularGrado(map,ciu1));
									 printf ("\n\n<Presione ENTER para continuar>");
									 getch();
									 break;}
				 case '4':{system("cls");
									 printf ("\n\nIngrese la ciudad que desea listar sus ciudades adyacentes: ");
									 scanf ("%d", &ciu1);
									 listarCiudadesAdyacentes(map, ciu1);
									 printf ("\n\n<Presione ENTER para continuar>");
									 getch();
									 break;}
				 case '5': {system("cls");
										printf ("Ingrese las ciudades que desea consultar si estan unidas ");
										printf ("\nIngrese la primer ciudad: ");
										scanf ("%d", &ciu1);
										printf ("\nIngrese la segunda ciudad: ");
										scanf ("%d", &ciu2);
										if (hayTramo(map, ciu1, ciu2))
											printf ("\nESTAN UNIDAS POR UN TRAMO");
										else
											printf ("\nNO ESTAN UNIDAS POR UN TRAMO");
										printf ("\n\n<Presione ENTER para continuar>");
										getch();
										break;}
				 case '6': {system("cls");
										if (esSimple(map))
											printf ("ESTA TRABAJANDO CON UN GRAFO SIMPLE");
										else
											printf ("NO ES UN GRAFO SIMPLE");
										printf ("\n\n<Presione ENTER para continuar>");
										getch();
										break;}
				 case '7': {system("cls");
										if (esCompleto(map))
											printf ("ESTA TRABAJANDO CON UN GRAFO COMPLETO");
										else
											printf ("NO ES UN GRAFO COMPLETO");
											printf ("\n\n<Presione ENTER para continuar>");
										getch();
										break;}
				 case '8': {system("cls");
										if (esRegular(map))
											printf ("ESTA TRABAJANDO CON UN GRAFO REGULAR");
										else
											printf ("NO ES UN GRAFO REGULAR");
										printf ("\n\n<Presione ENTER para continuar>");
										getch();
										break;}
				 case 'a':case'A': {system("cls");
							printf ("\n\n<Presione ENTER para continuar>");
							getch();
							break;}
			}
   } while ((op != 'S') && (op!='s'));
    return 0;
}
