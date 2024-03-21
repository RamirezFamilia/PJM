#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char cal[20];
    int num;
    char col[20];
    char cp[5];
    char ciu[20];
} domicilio;

typedef struct
{
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[10];
} paciente;

void lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);

void main(void)
{
    paciente hospital[100];
    int TAM;
    do
    {
        printf("ingrese el numero de pacientes: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);
    lectura(hospital, TAM);
    F1(hospital, TAM);
    F2(hospital, TAM);
    F3(hospital, TAM);
}

void lectura (paciente A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n\t\t paciente %d", I+1);
        fflush(stdin);
        printf("\nnombre: ");
        gets(A[I].nom);
        printf("edad: ");
        scanf("%d", &A[I].edad);
        printf("sexo (F-M): ");
        scanf("%c", &A[I].sexo);
        printf("condicion (1..5): ");
        scanf("%d", &A[I].con);
        fflush(stdin);
        printf("\t calle: ");
        gets(A[I].dom.cal);
        printf("\t numero: ");
        scanf("%d", &A[I].dom.num);
        fflush(stdin);
        printf("\tcolonia: ");
        gets(A[I].dom.col);
        fflush(stdin);
        printf("\tcodigo postal: ");
        gets(A[I].dom.cp);
        fflush(stdin);
        printf("\tciudad: ");
        gets(A[I].dom.ciu);
        fflush(stdin);
        printf("telefono: ");
        gets(A[I].tel);
    }
}

void F1(paciente A[], int T)
{
    int I,FEM,MAS,TOT;
    for (I=0; I<T; I++)
        switch (A[I].sexo)
        {
        case 'F':
            FEM++;
            break;
        case 'M':
            MAS++;
            break;
        }
    TOT = FEM + MAS;
    printf("\n porcrntaje de hombres: %.2f%", (float)MAS / TOT * 100);
    printf("\n porcrntaje de mujeres: %.2f%", (float)FEM / TOT * 100);
}

void F2(paciente A[], int T)
{
    int I, C1=0, C2=0, C3=0, C4=0, C5=0;
    for (I=0; I<T; I++)
        switch (A[I].con)
        {
        case 1:
            C1++;
            break;
        case 2:
            C2++;
            break;
        case 3:
            C3++;
            break;
        case 4:
            C4++;
            break;
        case 5:
            C5++;
            break;
        }
    printf("\n numero pacientes en condicion 1: %d", C1);
    printf("\n numero pacientes en condicion 2: %d", C2);
    printf("\n numero pacientes en condicion 3: %d", C3);
    printf("\n numero pacientes en condicion 4: %d", C4);
    printf("\n numero pacientes en condicion 5: %d", C5);
}

void F3(paciente A[], int T)
{
    int I;
    printf("\n pacientes ingresados en estado de gravedad");
    for (I=0; I<T; I++)
        if (A[I].con == 5)
            printf("\n nombre: %s\t telefono: %s", A[I].nom, A[I].tel);
}

