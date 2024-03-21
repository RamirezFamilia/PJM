#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char mat[20];
    int pro;
} matpro;

typedef struct
{
    int matri;
    char nom[20]
    matpro cal[5];

}alumno;

void lectura(alumno * , int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);

void main(void)
{
    alumno ALU[50];
    int TAM;
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);
    lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}

void lectura(alumno A[], int T)
{
    int I, J;
    for(I=0; I<T; I++)
    {
        printf("\n ingrese los datos del alumno %d", I+1);
        printf("\n ingrese la matricula del alumno: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("ingrese el nombre del alumno: ");
        gets(A[I].nom);
        for (J=0; J<5; J++)
        {
            printf("\t materia %d: ", J+1);
            fflush(stdin);
            gets(A[I].cal[J].mat);
            printf("\t promedio %d: ", J+1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}

void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I=0; I<T; I++)
    {
        printf("\n matricula del alumno: %d", A[I].matri);
        SUM = 0.0;
        for (J=0; J<5; J++)
            SUM = SUM + A[I].cal[J].pro;
        SUM = SUM / 5;
        printf("\t promedio: %.2f", SUM);
    }
}

void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumno con la calificacion mayor a 9 en la tercera materia");
    for (I=0; I<T; I++)
        if (A[I].cal[2].pro > 9)
        printf("\n matricula del alumno: %d", A[I].matri);
}

void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<T; I++)
        SUM = SUM + A[I].cal[3].pro;
    SUM = SUM / T;
    printf("\n\n promedio de la cuarta materia: %.2f", SUM);
}

