#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PRE, NPR;
    printf("\nIngrese el pricio del producto: ");
    scanf("%f", &PRE);
    if (PRE > 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f", NPR);
    }
}
