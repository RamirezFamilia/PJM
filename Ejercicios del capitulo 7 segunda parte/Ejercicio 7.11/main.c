#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(void)
{
    char p, cad[50];
    int n;
    printf("ingrese la posicion en la cadena que desea verificar: ");
    gets(cad);
    printf("\ningrese la posicion en la cadena que desea verificar: ");
    scanf("%d", &n);
    if ((n >= 0) && (n < 50))
    {
        p = cad[n-1];
        if (islower(p))
            printf("\n%c es una letra minuscula", p);
        else
            printf("\n%c no es una letra minuscula", p);
    }
    else
        printf("\nel valor ingresado de n es incorrecto");
}

