#include "Ciudades.h"

void crearCiudades(ciudades &c)
{
    c = NULL;
}

pareja darInfoPareja(ciudades c)
{
   return c->info_pareja;
}


bool esVacioCiudades(ciudades c)
{
    return (bool)(c==NULL);
}

ciudades ciudadesIzq(ciudades c)
{
    return c->Hizq;
}

ciudades ciudadesDer(ciudades c)
{
    return c->Hder;
}

ciudades crearCiudadesAtomica(pareja p)
{
    ciudades c;
    c = new nodoCiudades;
    c -> info_pareja = p;
    c -> Hder = NULL;
    c -> Hizq = NULL;
    return c;
}

bool existePareja(ciudades c, pareja p)
{
    if(esVacioCiudades(c))
    {
        return false;
    }
    else
    {
        if(igualesPareja(darInfoPareja(c),p))
        {
            return true;
        }
        else
        {
            if(mayorPareja(darInfoPareja(c),p))
            {
                return existePareja(ciudadesIzq(c),p);
            }
            else
            {
                return existePareja(ciudadesDer(c),p);
            }
        }

    }
}

void agregarInfoPareja(ciudades &c, pareja p)
{
     if(esVacioCiudades(c))
    {
        c = crearCiudadesAtomica(p);
    }
    else
    {
        if(mayorPareja(darInfoPareja(c), p))
        {
            agregarInfoPareja(c->Hizq, p);
        }
        else
        {
            agregarInfoPareja(c->Hder, p);
        }
    }
}

void desplegarCiudades(ciudades c)
{
    if(!esVacioCiudades(c))
    {
        desplegarCiudades(ciudadesIzq(c));
        desplegarPareja(darInfoPareja(c));
        desplegarCiudades(ciudadesDer(c));
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

pareja buscarPareja(ciudades c, string nomb_ciudad)
{
    if(igualNombreCiudad(darInfoPareja(c),nomb_ciudad))
    {
        return darInfoPareja(c);
    }
    else
    {
        if(mayorNombreCiudad(darInfoPareja(c), nomb_ciudad))
        {
            return(c->Hizq, nomb_ciudad);
        }
        else
        {
            return(c->Hder, nomb_ciudad);
        }
    }
}

/*void Modify(ciudades abb, pareja nuevaP)
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
}*/
