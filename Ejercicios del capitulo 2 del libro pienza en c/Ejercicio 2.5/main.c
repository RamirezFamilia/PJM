#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
    int OP, T;
    float REP;
    printf("Ingresa la opcion del calcula y el valor entero: ");
    scanf("%d %d", &OP, &T);
    switch(OP)
    {
        case 1: REP = T / 5;
        break;
        case 2: REP = pow(T,T);
        break;
        case 3: REP = 6 * T/2;
        break;
        default: REP = 1;
        break;
    }
    printf("\nResultado:   %7.2f", REP);
}
