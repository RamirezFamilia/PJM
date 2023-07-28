#include <stdio.h>

/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado,
incrementa 11% el mismo si este es inferior a $1500.
PRE y NPR: variables de tipo real. */

void main(void)
{
    float PRE, NPR;
    printf("ingrese el precio del producto: ");
    scanf("%f", &PRE);

    if (20000 < PRE < 1500)
    {
        NPR = PRE * 1.15;
        printf("\nNuevo precio: %7.2f", NPR);
    }
}
