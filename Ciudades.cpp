#include "Ciudades.h"


void Make(ciudades &abb)
{
    abb = NULL;
}

bool Member(ciudades abb, int num_ciudad)
{
    if (abb == NULL)
        return false;
    else if(darNum_ciudad(abb->info_pareja) == num_ciudad)
        return true;
    else if(darNum_ciudad(abb->info_pareja) < num_ciudad)
        return Member(abb->Hder,num_ciudad);
    else
        return Member(abb->Hizq,num_ciudad);
}

void Insert(ciudades &abb, pareja p)
{
    if(esVacio(abb)){
        abb = new nodoA;
        abb->info_pareja = p;
        abb->Hder = NULL;
        abb->Hizq = NULL;
    }else if(darNum_ciudad(abb->info_pareja) < darNum_ciudad(p)){
        Insert(abb->Hder, p);
    }else{
        Insert(abb->Hizq, p);
    }

}

pareja Find(ciudades abb, int num_ciudad)
{
    if(darNum_ciudad(abb->info_pareja) == num_ciudad){
        return abb->info_pareja;
    }else if(darNum_ciudad(abb->info_pareja) < num_ciudad){
        return Find(abb->Hder, num_ciudad);
    }else{
        return Find(abb->Hizq, num_ciudad);
    }

}

void Modify(ciudades abb, pareja nuevaP)
{
    if(darNum_ciudad(abb->info_pareja) == darNum_ciudad(nuevaP)){
        string s;
        DarNombreCiudad(nuevaP, s);
        setNombre_ciudad(abb->info_pareja, s);
    }else if(darNum_ciudad(abb->info_pareja) < darNum_ciudad(nuevaP)){
        Modify(abb->Hder, nuevaP);
    }else{
        Modify(abb->Hizq, nuevaP);
    }
}

void Delete(ciudades &abb, int num_ciudad)
{

}

void desplegarCiudades(ciudades abb)
{
    if (abb != NULL){
        desplegarCiudades(abb->Hizq);
        mostrarPareja(abb->info_pareja);
        desplegarCiudades(abb->Hder);
    }
}

bool esVacio(ciudades abb){
    return (bool)(abb==NULL);
}

