#include <stdio.h>
#include <stdlib.h>


int multiplo(int, int);

void main(void)
{
    int NU1, NU2, RES;
    printf("\n Ingresa dos numeros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = multiplo(NU1, NU2);
    if (RES)
        printf("\n El segundo numero es multiplo del primero");
    else
        printf("\n El segundo numero no es multiplo del primero");
    {
        int multiplo(int N1, int N2)
        {
            int RES;
            if ((N2 % N1) == 0)
                RES = 1;
            else
                RES = 0;
            return (RES);
        }
    }
}
