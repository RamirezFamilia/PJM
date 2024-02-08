#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int T, P, N;
    printf("Ingresa los valores de T, P y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if (P != 0)
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
            printf("\nSe comprueba la igualdad");
            else
                printf("\nNo se comprueba la igualdad");
    }
    else
        printf("\nP Tiene que ser diferente de cero");
}
