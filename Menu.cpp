#include "Menu.h"


void mostrarMenu(int &opcion)
{
    printf("\n\n********************");
    printf("\n** Menu principal **\n");
    printf("\********************\n\n");
    printf("1. Altas y Bajas \n");
    printf("2. Listados \n");
    printf("3. Consultas \n");
    printf("4. Salir del programa \n");
    printf("Opcion: ");
    scanf("%d",&opcion);
}

void mostrarSubMenuAltasyBajas(int &opcion)
{
    printf("\n\n***************************");
    printf("\n** Menu de Altas y Bajas **\n");
    printf("\***************************\n\n");
    printf("1. Alta Expediente \n");
    printf("2. Alta Revision \n");
    printf("3. Baja Expediente por codigo \n");
    printf("4. Volver al menu principal \n");
    printf("Opcion: ");
    scanf("%d",&opcion);
}


void mostrarSubMenuListados(int &opcion)
{
    printf("\n\n*******************");
    printf("\n** Menu Listados **\n");
    printf("\*******************\n\n");
    printf("1. Listar Expedientes Ordenados \n");
    printf("2. Listar Revisiones Cronologicamnete \n");
    printf("3. Lista Datos Expediente Mayor y Menor Codigo \n");
    printf("4. Lista Revisiones De Un Expediente \n");
    printf("5. Volver al menu principal \n");
    printf("Opcion: ");
    scanf("%d",&opcion);
}

void mostrarSubMenuConsultas(int &opcion)
{
    printf("\n\n*******************");
    printf("\n** Menu Consultas **\n");
    printf("\n\n*******************");
    printf("1. Cantidad Expediente por Apellido Escribano \n");
    printf("2. Codigo Expediente Con Mayor Cantidad Revisiones \n");
    printf("3. Cantidad De Revisiones Entre Fechas \n");
    printf("4. Cantidad De Revisiones De Cada Tipo \n");
    printf("5. Volver al menu principal \n");
    scanf("%d",&opcion);
}

