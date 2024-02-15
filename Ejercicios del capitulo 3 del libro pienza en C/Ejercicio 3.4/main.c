#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while (NUM)
    {
        CUA = pow (NUM, 2);
        printf("%d al cuadrado es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese el siguiente numero entero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }
    printf("\nLA SUMA DE LOS CUADRADOS ES %ld", SUC);
}
