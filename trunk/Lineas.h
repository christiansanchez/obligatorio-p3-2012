#ifndef LINEAS_H_INCLUDED
#define LINEAS_H_INCLUDED
#include "String.h"
#include "Linea.h"

typedef struct nodoA {
    linea info_linea;
    nodoA * Hizq;
    nodoA * Hder;
} nodoLineas;

typedef nodoLineas * lineas;

void Make(lineas &abb);
bool Member(lineas abb, string codigo);
void Insert(lineas &abb, linea* l);
linea* Find(lineas abb, string codigo);
void Modify(lineas abb, linea* nuevo);
void Delete(lineas &abb, string codigo);
void desplegarLineas(lineas abb);
bool esVacioAbb(lineas abb);

#endif // LINEAS_H_INCLUDED
