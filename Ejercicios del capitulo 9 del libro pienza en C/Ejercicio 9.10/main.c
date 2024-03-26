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
    if ((ar = fopen ("ad1.dat", "r+")) != NULL)
        modifica(ar);
    else
        printf("\n el archivo no se puede abrir");
    fclose(ar);
}

void lee(FILE *ap)
{
    int d;
    alumno alu;
    printf("\n ingrese el numero de registro que desea modificar: ");
    scanf("%d", &d);

    fseek(ap, (d-1)*sizeof(alumno), 0);
    fread(&alu, sizeof(alumno), 1, ap);
    printf("\n ingrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);
    fseek(ap, (d-1)*sizeof(alumno), 0);
    fwrite(&alu, sizeof(alumno), 1, ap);
}
