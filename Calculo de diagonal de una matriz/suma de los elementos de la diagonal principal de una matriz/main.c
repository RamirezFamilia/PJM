#include <stdio.h>
#include <stdlib.h>
/* Programa para calcular la suma de los elementos de la diagonal principal de una matriz cuadrado*/

const int MAX = 10;

void main(void)
{
    int matriz[MAX][MAX];
    int n, i, j, suma = 0;

    printf("Ingrese el tamano de la matriz (n x n): ");
    scanf("%d", &n);

    printf("Ingrese los elementos de la matriz:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("La diagonal principal de la matriz es:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", matriz[i][i]);
        suma += matriz[i][i];
    }

    printf("\nLa suma de los elementos de la diagonal principal es: %d\n", suma);
    return 0;
}
