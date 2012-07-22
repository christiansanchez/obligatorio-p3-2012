#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include <stdio.h>
const int MAX=80;
typedef char *string;

//crea un string vacío (solo con el carácter ‘\0’)
void strcrear (string & s);

//libera la memoria ocupada por el string y lo deja vacío.
void strdestruir (string & s);

//devuelve el largo de un string. Se entiende por largo, la cantidad de caracteres antes del carácter nulo.
int strlar(string s);

//recibe dos strings y copia el segundo en el primero.
void strcop(string &s1,string s2);

//lee un string desde el teclado.
void scan(string &s);

//recibe dos strings y concatena el segundo string al final del primero.
void strcon(string &s1,string s2);

//recibe dos strings y devuelve el primero en el segundo y viceversa.
void strswp(string &s1, string &s2);

//despliega un string por pantalla.
void print(string s);

//recibe dos strings y devuelve TRUE si el primero de ellos es menor (en orden alfabético) que el segundo, o FALSE en caso contrario.
bool strmen(string s1,string s2);

//reciba dos strings y devuelve TRUE si ambos strings son iguales o FALSE en caso contrario.
bool streq(string s1,string s2);

//persiste en disco, el contenido del string s.
//PRECONDICION: Puntero a file debe venir abierto para escritura
void Guardar_string(string s, FILE *pt);

//persiste en disco, el contenido del string s.
//PRECONDICION: Puntero a file debe venir abierto para lectura
void Cargar_string(string &s, FILE *pt);

#endif // STRING_H_INCLUDED
