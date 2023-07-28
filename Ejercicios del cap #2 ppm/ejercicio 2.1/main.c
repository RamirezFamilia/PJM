#include <stdio.h>

/* Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobada si su promedio es mayor o igual a 7.

PRO: variable de tipo real.*/

void main(void)
{
    float PRO;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 7);
        printf("\nAprobado");
}
