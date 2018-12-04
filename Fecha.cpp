#include "Fecha.h"

void cargarFecha(Fecha &f)
{
    printf("\nDia: ");
    scanf("%d",&f.dia);

    printf("\nMes: ");
    scanf("%d",&f.mes);

    printf("\nAnio: ");
    scanf("%d",&f.anio);
}

void mostrarFecha(Fecha f)
{
    printf(" %d",f.dia);
    printf("/%d",f.mes);
    printf("/%d",f.anio);
}

boolean fechaValida(Fecha f)
{
    boolean valida;
    switch (f.mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if (f.dia >= 1 && f.dia <= 31)
                    valida = TRUE;
                else
                    valida = FALSE;
            break;
        case 4:
        case 6:
        case 9:
        case 11: if (f.dia >= 1 && f.dia <= 30)
                    valida = TRUE;
                else
                    valida = FALSE;
            break;
        case 2: if (f.anio % 4 == 0)
                {
                    if (f.dia >= 1 && f.dia <= 29)
                        valida = TRUE;
                    else
                        valida = FALSE;
                }
                else
                {
                    if (f.dia >= 1 && f.dia <= 28)
                        valida = TRUE;
                    else
                        valida = FALSE;
                }
            break;

        default: valida = FALSE;
    }

    return valida;
}


boolean fechaMayor(Fecha f1, Fecha f2)
{
    boolean mayor = FALSE;
    if (f1.anio > f2.anio)
        mayor = TRUE;
    else
        {
            if (f1.anio == f2.anio)
            {
                if (f1.mes > f2.mes)
                    mayor = TRUE;
                else
                {
                   if (f1.mes == f2.mes)
                    {
                        if (f1.dia > f2.dia)
                            mayor = TRUE;
                    }
                }
            }
        }
    return mayor;
}

boolean fechaIgual(Fecha f1, Fecha f2)
{
    boolean iguales = FALSE;
    if (f1.dia == f2.dia && f1.mes == f2.mes && f1.anio == f2.anio)
            iguales = TRUE;
    return iguales;
}

int darDia(Fecha f)
{
    return f.dia;
}

int darMes(Fecha f)
{
    return f.mes;
}

int darAnio(Fecha f)
{
    return f.anio;
}
