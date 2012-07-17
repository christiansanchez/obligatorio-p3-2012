#include "Linea.h"
#include <stdio.h>

void cargarLinea(linea &l)
{
    printf("\nIngrese codigo de la linea: ");
    fflush(stdin);
    strcrear(l.codigo);
    scan(l.codigo);
    printf("Ingrese el numero de la ciudad de origen: ");
    scanf("%d",&l.num_origen);
    printf("Ingrese el numero de la ciudad de destino: ");
    scanf("%d",&l.num_destino);
    crearRrecorrido(l.linea_recorrido);
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

bool mayorLinea(linea l1, linea l2)
{
    string codigo1;
    string codigo2;
    darCodigo(l1,codigo1);
    darCodigo(l2,codigo2);
    return strmen(codigo2, codigo1);
}
