#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1;

    printf("Introduce un caracter: ");
    scanf("%c", &p1);

    if (p1 >= 'A' && p1 <= 'Z')
    {
        p1 = p1 + 32;
        printf("\nEl caracter en minuscula es: %c", p1);
    }

    else
    {
        if(p1 >= 'a' && p1 <= 'z')
        p1 = p1 - 32;
        printf("\nEl caracter en mayuscula es: %c", p1);
    }
    return 0;
}

