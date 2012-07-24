#include "Linea.h"
#include <stdio.h>
#include<conio.h>
void cargarLinea(linea &l, ciudades ciud, string codigo, bool &ok)
{
    string nomb1;
    string nomb2;
    pareja p;
    parada parad;
    strcrear(nomb1);
    strcrear(nomb2);
    fflush(stdin);
    strcrear(l.codigo);
    strcop(l.codigo,codigo);
    fflush(stdin);
    printf("\nIngrese el nombre de la ciudad de origen: ");
    scan(nomb1);
    if(Member(ciud, nomb1))
    {
        p = Find(ciud, nomb1);
        l.num_origen = darNumCiudad(p);
        fflush(stdin);
        printf("\nIngrese el nombre de la ciudad de destino: ");
        scan(nomb2);
        if(Member(ciud, nomb2))
        {
            p = Find(ciud, nomb2);
            l.num_destino = darNumCiudad(p);
            Crear(l.linea_recorrido);
            cargarParada(parad, 1 , l.num_origen);
            InsBack(l.linea_recorrido, parad);
            cargarParada(parad, 2 , l.num_destino);
            InsBack(l.linea_recorrido, parad);
            ok = true;
        }
        else
        {
            printf("\nNo se encuentra ingresada en nuestro sistema la ciudad ");
            print(nomb2);
            printf(".\n");
            ok = false;
            printf ("\n\n\tPresione enter para continuar.");
            getch();
        }
    }
    else
    {
        printf("\nNo se encuentra ingresada en nuestro sistema la ciudad ");
        print(nomb1);
        printf(".\n");
        ok = false;
        printf ("\n\n\tPresione enter para continuar.");
        getch();
    }
}

void darCodigo(linea l, string &codigo)
{
     strcop(codigo, l.codigo);
}

int darNumOrigen(linea l)
{
    return l.num_origen;
}

int darNumDestino(linea l)
{
    return l.num_destino;
}

recorrido darLineRecorrido(linea l)
{
    return l.linea_recorrido;
}

bool igualesLinea(linea l1, linea l2)
{
    string codigo1;
    string codigo2;
    darCodigo(l1,codigo1);
    darCodigo(l2,codigo2);
    return streq(codigo1, codigo2);
}

bool igualesLineaCodigo(linea l, string codigo)
{
    string auxcodigo;
    darCodigo(l,auxcodigo);
    return streq(auxcodigo, codigo);
}

bool mayorLinea(linea l1, linea l2)
{
    string codigo1;
    string codigo2;
    darCodigo(l1,codigo1);
    darCodigo(l2,codigo2);
    return strmen(codigo2, codigo1);
}

bool mayorLineaCodigo(linea l, string codigo)
{
    string auxcodigo;
    darCodigo(l,auxcodigo);
    return strmen(codigo, auxcodigo);
}

void desplegarDatosBasicos(linea l, ciudades c)
{
    string codigo, c_origen, c_destino;
    strcrear(codigo);
    strcrear(c_origen);
    strcrear(c_destino);
    darCodigo(l,codigo);
    printf("\n\tLINEA: ");
    print(codigo);
    darNombreCiudad(Find(c, darNumOrigen(l)), c_origen);
    printf(" - ORIGEN: ");
    print(c_origen);
    darNombreCiudad(Find(c, darNumDestino(l)), c_destino);
    printf(" - DESTINO: ");
    print(c_destino);
    printf(" - CANTIDAD DE PARADAS: %d\n",Largo(darLineRecorrido(l)));
}

void desplegarParadas(linea l, ciudades c)
{
    recorrido r;
    r = darLineRecorrido(l);
    ListarRecorrido(r, c);
}

void cambiarCiduadDestino(linea &l, int new_num_dest)
{
    l.num_destino = new_num_dest;
}

void agregarParada(linea &l,int new_num_dest)
{
    parada p;
    recorrido r = darLineRecorrido(l);
    int new_num_parada = darNum_parada(Ultimo(r)) + 1;
    cambiarCiduadDestino(l, new_num_dest);
    cargarParada(p, new_num_parada , new_num_dest);
    InsBack(r, p);
    l.linea_recorrido = r;
}
