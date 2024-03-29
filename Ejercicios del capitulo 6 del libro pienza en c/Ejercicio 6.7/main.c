#include <stdio.h>
#include <stdlib.h>

void lectura(int [15][12]);
void lectura2(float, int);
void funcion1(int [][12], int, int, float *, float *);
void funcion2(float *, int);
void funcion3(float *, int);

void main(void)
{
    int FAB[15][12] = {0};
    float COS[15], VEN[15];
    Lectura1(FAB);
    Lectura2(COS, 15);
    funcion1(FAB, 15, 12, COS, VEN);
    funcion2(VEN, 15);
    funcion3(VEN, 15);
}

void lectura(int A[][12])
{
    int MES, PRO, CAN;
    printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
    scanf("%d %d %d", &MES, &PRO, &CAN);
    while (MES!= -1 && PRO!=-1 && CAN!=-1)
    {
        A[MES-1][PRO-1] += CAN;
        printf("\nIngrese mes, tipo de producto y cantidad vendida: ");
        scanf("%d %d %d", &MES, &PRO, &CAN);
    }
}

void Lectura2(float A[], int N)
{
    int I;
    for (I=0; I<N; I++)
    {
        printf("ingrese costo del producto %d: ", I+1);
        scanf("%f", &A[I]);
    }
}

void funcion1(int A[][12], int F, int C, float V1[], float V2[])
{
    int I, J, SUM;
    printf("\n");
    for (I=0; I<F; I++)
    {
        SUM = 0;
              for (J=0; J<C; J++)
                  SUM += A[I][J];
        V2[I] = V1[I] * SUM;
        printf("\ntotal de ventas del producto %d: %8.2f", I+1, V2[I]);
    }
}

void funcion2(float A[], int C)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<C; I++)
        SUM += A[I];
    printf("\n\ntotal de ventas de la fabrica: %.2f", SUM);
}

void funcion3(float A[], int C)
{
    int I, TPR = 0;
    float VEN = A[0];
    for (I=1; I<C; I++)
        if (VEN < A[I])
        {
            TPR = I;
            VEN = A[I];
        }
    printf("\n\ntipo de productos mas vendido: %d \t ventas: %.2f", TPR + 1, VEN);
}
