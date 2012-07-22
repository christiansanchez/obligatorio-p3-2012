#include "Parada.h"
#include <stdio.h>
int main_ya_probado4()
{
    parada p;
    int aux1 = 8, aux2 = 1;
    printf("\nCargo una parada\n");
    cargarParada(p, aux1, aux2);
    printf("\nNumero parada: %d\n",darNum_parada(p));
    printf("\nNumero ciudad: %d\n",darNum_Ciudad_Parada(p));
}
