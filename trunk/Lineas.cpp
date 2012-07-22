#include "Lineas.h"
#include <stdio.h>

void Make(lineas &l)
{
    l = NULL;
}

lineas crearLineasAtomica(linea l)
{
    lineas ls;
    ls = new nodoLineas;
    ls -> info_linea = l;
    ls -> Hder = NULL;
    ls -> Hizq = NULL;
    return ls;
}

bool esVacioLineas(lineas l)
{
    return (bool)(l==NULL);
}

void Insert(lineas &ls, linea l)
{
    if(esVacioLineas(ls))
    {
        ls = crearLineasAtomica(l);
    }
    else
    {
        if(mayorLinea(darLinea(ls), l))
        {
            Insert(ls->Hizq, l);
        }
        else
        {
            Insert(ls->Hder, l);
        }
    }
}

linea darLinea(lineas l)
{
   return l->info_linea;
}

lineas lineasIzq(lineas l)
{
    return l->Hizq;
}

lineas lineasDer(lineas l)
{
    return l->Hder;
}

linea Find(lineas ls, string codigo)
{
    if(igualesLineaCodigo(darLinea(ls),codigo))
    {
        return darLinea(ls);
    }
    else
    {
        if(mayorLineaCodigo(darLinea(ls), codigo))
        {
            return Find(ls->Hizq, codigo);
        }
        else
        {
            return Find(ls->Hder, codigo);
        }
    }
}

bool Member(lineas ls, string codigo)
{
    if(esVacioLineas(ls))
    {
        return false;
    }
    else
    {
        if(igualesLineaCodigo(darLinea(ls), codigo))
        {
            return true;
        }
        else
        {
            if(mayorLineaCodigo(darLinea(ls), codigo))
            {
               return Member(ls->Hizq, codigo);
            }
            else
            {
                return Member(ls->Hder, codigo);
            }
        }
    }
}
/*
void desplegarLineas(lineas ls, ciudades c)
{
    if(ls!=NULL)
    {
        desplegarLineas(ls->Hizq, c);
        desplegarDatosBasicos(darLinea(ls),c);
        desplegarLineas(ls->Hder, c);
    }
}*/
