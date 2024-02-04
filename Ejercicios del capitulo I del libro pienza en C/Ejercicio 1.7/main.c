#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PIE, LIB, MET, KIL;
    printf("\nInfrese los datos del objeto: ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.3048;
    KIL = LIB * 0.45359;
    printf("\nDatos del objeto \nLongitud: %5.2f \t peso: %5.2f", MET, KIL);

}
