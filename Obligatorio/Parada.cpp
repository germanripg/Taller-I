#include "Parada.h"


int DarNumero(Parada p)
{
    return p.numero;
}

Ciudad DarCiudad(Parada p)
{
    return p.ciudad;
}

void MostrarParada(Parada p)
{
    printf(" Parada: ");
    printf("%d",p.numero);
    printf(" - ");
    MostrarCiudad(p.ciudad);
}

void MostrarParadaAlternativo(Parada p)
{
    printf(" Parada: ");
    printf("%d",p.numero);
    printf(" - ");
    MostrarCiudad(p.ciudad);
    printf(" || ");
}

void CargarParada(Parada &p, int numParada, Ciudad ciudParada)
{
    p.ciudad = ciudParada;
    p.numero = numParada;
}