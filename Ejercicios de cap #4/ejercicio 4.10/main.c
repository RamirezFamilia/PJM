#include <stdio.h>

int multiplo(int, int);

void main(void)
{
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
        if (RES)
            printf("\nEl segundo numero es multiplo del primero");
        else
            printf("\nEl segundo numero no es multiplo del primero");
}

int multiplo(int NU1, int NU2)
{
    int RES;
    if ((NU2 % NU1) == 0)
        RES = 1;
    else
        RES = 0;
    return (RES);
}

