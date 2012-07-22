#include "Linea.h"
#include <stdio.h>

void cargarLinea(linea &l, recorrido r)
{
    printf("\nIngrese codigo de la linea: ");
    fflush(stdin);
    strcrear(l.codigo);
    scan(l.codigo);
    fflush(stdin);
    printf("Ingrese el numero de la ciudad de origen: ");
    scanf("%d",&l.num_origen);
    fflush(stdin);
    printf("Ingrese el numero de la ciudad de destino: ");
    scanf("%d",&l.num_destino);
    l.linea_recorrido = r;
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
    printf("\nCODIGO DE LINEA: ");
    print(codigo);
    darNombreCiudad(Find(c, darNumOrigen(l)), c_origen);
    printf("\nCIUDAD DE ORIGEN: ");
    print(c_origen);
    darNombreCiudad(Find(c, darNumDestino(l)), c_destino);
    printf("\nCIUDAD DE DESTINO: ");
    print(c_destino);
    printf("\nCANTIDAD DE PARADAS: %d",Largo(darLineRecorrido(l)));
}
