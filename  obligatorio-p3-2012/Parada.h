#ifndef PARADA_H_INCLUDED
#define PARADA_H_INCLUDED

typedef struct{	int num_parada;
								int num_ciudad_parada;
							} parada;

void cargarParada(parada &p);
//void borrarParada(parada &p);
//void mostrarParada(parada p);
int darNum_parada(parada p);
int darNum_Ciudad_Parada(parada p);

#endif // PARADA_H_INCLUDED
