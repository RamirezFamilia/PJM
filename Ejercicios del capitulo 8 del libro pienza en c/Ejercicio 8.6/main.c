#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void lectura(producto *, int);
void ventas(producto *, int);
void reabastecimiento(producto *, int);
void nuevos_productos(producto *, int *);
void inventario(producto *, int);
void main(void)
{
    producto INV[100];
    int TAM, OPE;
    do
    {
        printf("ingrese el numero de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    lectura(INV, TAM);
    printf("\n ingrese operacion a realizar. \n\t\t1 - ventas \n\t\t2 - reabastecimiento \n\t\t3 - nuevos productos \n\t\t 4 - inventario \n\t\t 0 - salir: ");
    scanf("%d", &OPE);
    while (OPE)
    {
        switch (OPE)
        {
        case 1:
            ventas(INV, TAM);
            break;
        case 2:
            reabastecimiento(INV, TAM);
            break;
        case 3:
            nuevos_productos(INV, &TAM);
            break;
        case 4:
            inventario(INV, TAM);
            break;
        };
        printf("\n ingrese operacion a realizar. \n\t\t1 - ventas \n\t\t2 - reabastecimiento \n\t\t3 - nuevos productos \n\t\t 4 - inventario \n\t\t 0 - salir: ");
        scanf("%d", &OPE);
    }
}

void lectura(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n ingrese informacion del producto %d", I+1);
        printf("\n\t clave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("\t nombre: ");
        gets(A[I].nombre);
        printf("\tprecio: ");
        scanf("%f", &A[I].precio);
        printf("\t existencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\n ingrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;
    while (CLA)
    {
        printf("\t cantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].clave <CLA))
            I++;
        if ((I == T) || (A[I].clave > CLA))
            printf("\n la clave del producto es incorrecta");
        else if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
        }
        else
        {
            printf("\n no existe en inventario la cantidad solicitada. solo hay %d", A[I]. existencia);
            printf("\n los lleva 1 - si 0 - no?: ");
            scanf("%d", &RES);
            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
            }
        }
        printf("\n ingrese la siguiente clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
    printf("\n total de la venta: %f", TOT);
}

void reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;
    printf("\n Ingrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while (CLA)
    {
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
            I++;
        if ((I==T) || (A[I].clave > CLA))
            printf("\n la clave del producto ingresada es incorrecta");
        else
        {
            printf("\t cantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }
        printf("\n ingrese otra clave del producto -0 para salir-: ");
    }
}

void nuevos_productos(producto A[], int *T)
{
    int CLA, I, J;
    printf("\n ingrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while ((*T < 30) && (CLA))
    {
        I=0;
        while ((I < *T) && (A[I].clave < CLA))
            I++;
        if (I == *T)
        {
            A[I].clave = CLA;
            printf("\t nombre: ");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\t Precio: ");
            scanf("%f", &A[I].precio);
            printf("\t cantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        else if (A[I].clave == CLA)
            printf("\n el producto ya se encuentra en el inventario");
        else
        {
            for (J=*T; J>I; J--)
                A[J] = A[J-1];
            A[I].clave = CLA;
            printf("\t nombre: ");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\t precio: ");
            scanf("%f", &A[I].precio);
            printf("\t cantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        printf("\n ingrese otra clave de producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
    if (*T == 30)
        printf("\n ya no hay espacio para incorporar nuevos productos");
}

void inventario(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n clave: %d", A[I].clave);
        printf("\t nombre: %s", A[I].nombre);
        printf("\t Precio: %d", A[I].precio);
        printf("\t existencia: %d \n", A[I].existencia);
    }
}
