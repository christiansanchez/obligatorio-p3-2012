#include "Lineas.h"
#include <stdio.h>

void crearLineas(lineas &l)
{
    l = NULL;
}

linea darLinea(lineas l)
{
   return l->info_linea;
}


bool esVacioLineas(lineas l)
{
    return (bool)(l==NULL);
}

lineas lineasIzq(lineas l)
{
    return l->Hizq;
}

lineas lineasDer(lineas l)
{
    return l->Hder;
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


void agregarLinea(lineas &ls, linea l)
{
    if(esVacioLineas(ls))
    {
        ls = crearLineasAtomica(l);
    }
    else
    {
        if(mayorLinea(darLinea(ls), l))
        {
            agregarLinea(ls->Hizq, l);
        }
        else
        {
            agregarLinea(ls->Hder, l);
        }
    }
}

bool existeLinea(lineas ls, linea l)
{
    if(esVacioLineas(ls))
    {
        return false;
    }
    else
    {
        if(igualesLinea(darLinea(ls),l))
        {
            return true;
        }
        else
        {
            if(mayorLinea(darLinea(ls),l))
            {
                return existeLinea(ls->Hizq,l);
            }
            else
            {
                return existeLinea(ls->Hder,l);
            }
        }
    }
}


/*
void deplegarBasicosLineas(lineas ls)
{
    if(!esVacioLineas(ls))
    {
        deplegarBasicosLineas(lineasIzq(ls));
        desplegarDatosBasicos(darLinea(ls));
        deplegarBasicosLineas(lineasDer(ls));
    }
}
*/
