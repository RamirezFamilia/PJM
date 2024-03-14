#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("desea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();
    while (c == 'S')
    {
        printf("\ningrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++,
        sum += atof(cad);
        printf("\n desea ingresar otra cadena de caracteres (S/N)? ");
        c = getchar();
    }
    printf("\nSuma: %.2f", sum);
    printf("\npromedio: %.2f", sum / i);
}
