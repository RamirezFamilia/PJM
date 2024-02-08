#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PRO;
    printf("Ingresa el promedio del alumno: ");
    scanf("%f", &PRO);
    if (PRO >= 7)
        printf("\nAprobado");
    else
        printf("\nReprobado");
}
