#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen ("ad1.dat", "r")) != NULL)
        lee(ar);
    else
        printf("\n el archivo no se puede abrir");
    fclose(ar);
}

void lee(FILE *ap)
{
    alumno alu;

    fread(&alu, sizeof(alumno), 1, ap);
    while (!feof(ap))
    {
        printf("\n matricula: %d", alu.matricula);
        printf("\t carrera: %d", alu.carrera);
        printf("\t promedio: %f\t ", alu.promedio);
        puts(alu.nombre);
        fread(&alu, sizeof(alumno), 1, ap);
    }
}
