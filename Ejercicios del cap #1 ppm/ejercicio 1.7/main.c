#include <stdio.h>

/* Medidas.
El programa, al recibir como datos la longitud y el peso de un odjeto expresados en pies y libras, calcula los datos de esta odjeto pero en metros y kilogramaos, respectivamentes.

PIE, LIB, MET Y KIL: variables de tipo real. */

void main(void)
{
    float PIE, LIB, MET, KIL;
    printf("Ingrese los datos del odjeto: ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf("\nDatos del objeto \nLongitud: %5.2f \t peso: %5.2f", MET, KIL);
}

