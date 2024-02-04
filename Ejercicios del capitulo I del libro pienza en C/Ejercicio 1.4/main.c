#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    float BAS, ALT, SUP;
    printf("Ingrese la base y la altura del triangula: ");
    scanf("%f %f", &BAS, &ALT);
    SUP = BAS * ALT / 2;
    printf("\n La superficie del triangula es: %5.2f", SUP);
}
