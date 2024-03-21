#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float pricio;
    char dispo;
} propiedades;

void lectura(propiedades, int);
void F1(propiedades *, int);
void F2(propiedades *, int);

void main(void)
{
    propiedades propie[100];
    int TAM;
    do
    {
        printf("ingrese el numero de propiedades: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    lectura(propie, TAM);
    F1(propie, TAM);
    F2(propie, TAM);
}

void lectura(propiedades A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n\t ingrese datos de la propiedad %d", I + 1);
        printf("\n clave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("caracteristicas: ");
        fflush(stdin);
        gets(A[I].car);
        printf("\tzona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("\t calle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("\tcolonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("pricio: ");
        scanf("%f", &A[I].precio);
        printf("disponibilidad (venta-v renta-r): ");
        scanf("%c", &A[I].dispo);
    }
}

void F1(propiedades A[], int T)
{
    int I;
    printf("\n\t\t listado de propiedades para venta en meraflores");
    for (I=0; I<T; I++)
        if ((A[I].dispo == 'v') && (strcmp (A[I].ubi.zona, "miraflores") == 0))
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
            {
                printf("\n clave de la propiedad: ");
                puts(A[I].clave);
                printf("\n superficie cubierta: %f", A[I].scu);
                printf("\n superficie terreno: %f", A[I].ste);
                printf("\n caracteristicas: ");
                puts(A[I].car);
                printf("calle: ");
                puts(A[I].ubi.calle);
                printf("colonia: ");
                puts(A[I].ubi.colo);
                printf("precio: %.2f\n", A[I].precio);
            }
}

void F2(propiedades A[], int T)
{
    int I;
    float li, ls;
    char zon[20];
    printf("\n\t\t listado de propiedades para renta");
    printf("\n ingrese zona geografica: ");
    fflush(stdin);
    gets(zon);
    printf("ingrese el limite inferior del precio: ");
    scanf("%f", &li);
    printf("ingrese el limite superior del precio: ");
    scanf("%f", &ls);
    for (I=0; I<T; I++)
        if ((A[I].dispo == 'r') && (strcmp (A[I].ubi.zona, zon) == 0))
            if ((A[I].precio >= li) && (A[I].precio <= ls))
            {
                printf("\n clave de la propiedad: ");
                puts(A[I].clave);
                printf("\n superficie cubierta: %d", A[I].scu);
                printf("\n superficie terreno: %d", A[I].ste);
                printf("\n caracteristicos: ");
                puts(A[I].car);
                printf("calle: ");
                puts(A[I].ubi.calle);
                printf("colonia: ");
                puts(A[I].ubi.colo);
                printf("precio: %.2f", A[I].precio);
            }
}
