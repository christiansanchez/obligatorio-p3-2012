#include "String.h"

void strcrear (string & s)
{
    s = new char[1];
    s[0] = '\0';
}

void strdestruir (string &s)
{
    delete [] s;
    strcrear (s);
}

int strlar(string s)
{
    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}

void strcop(string &s1,string s2)
{
    int i = 0;
    int largo = strlar(s2)+1;
    delete [] s1;
    s1 = new char[largo];
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

void scan(string &s)
{
    string aux = new char[MAX];
    int i=0;
    char c;
    scanf("%c",&c);
    while ((c!='\n') && (i<MAX))
    {
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i]='\0';
    strcop(s,aux);
    strdestruir(aux);
}

void strcon(string &s1,string s2)
{
    string aux;
    strcrear(aux);
    strcop(aux, s1);
    int largo = strlar(s1) + strlar(s2) + 1;
    if (largo > MAX)
        largo = MAX;
    delete [] s1;
    s1 = new char[largo];

    int i=0;
    while (aux[i] != '\0')
    {
        s1[i] = aux[i];
        i++;
    }

    int j=0;
    while (s2[j] != '\0' && i < MAX-1)
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
    delete [] aux;
}

void strswp(string &s1, string &s2)
{
    string aux;
    aux = s1;
    s1 = s2;
    s2 = aux;
}

void print(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c",(s[i]));
        i++;
    }
}

bool strmen(string s1,string s2)
{
    int i=0;
    bool encontre = false;
    bool menor = false;
    while ((!encontre) && (s1[i]!='\0') && (s2[i]!='\0'))
    {
        if (s1[i]!=s2[i])
        {
            encontre = true;
            if (s1[i]<s2[i])
                menor = true;
        }
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = true;
    return menor;
}

bool streq(string s1,string s2)
{
    int i=0;
    bool iguales = true;
    while (iguales && (s1[i]!='\0') && (s2[i]!='\0'))
    {
        if (s1[i]!=s2[i])
        iguales = false;
        i++;
    }
    if ((s1[i]!='\0') || (s2[i]!='\0'))
        iguales = false;
    return iguales;
}

void Guardar_string(string s, FILE *pt){
    int i = 0;
    while(s[i] != '\0'){
        fwrite(&s[i], sizeof(char), 1, pt);
        i++;
    }
    fwrite(&s[i], sizeof(char), 1, pt);
}

void Cargar_string(string &s, FILE *pt){
    int i = 0;
    string aux;

    aux = new char[MAX];

    fread(&aux[i], sizeof(char), 1, pt);

    while(!feof(pt) && aux[i] != '\0'){
        i++;
        fread(&aux[i], sizeof(char), 1, pt);
    }

    strcop(s, aux);
    delete [] aux;
}
