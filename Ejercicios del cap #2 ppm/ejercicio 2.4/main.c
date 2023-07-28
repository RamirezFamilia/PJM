#include <stdio.h>

/* incremento de precio.
El programa, al recibir como dato el precio de un producto, incrementa al
mismo en 11% si es menor a 1500$ y 8% en caso contrario (mayor o igual).

PRE Y NPR: variables de tipo real. */

void main(void)
{
    float PRE, NPR;
    printf("Ingrse el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2", NPR);
}
