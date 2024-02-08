#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;
    printf("Ingresa el numero: ");
    scanf("%d", NUM);
    if (NUM == 0)
        printf("\nNulo");
    else
        if (pow (-1, NUM) > 0)
            printf("\nPar");
        else
            printf("\nImpar");
}
