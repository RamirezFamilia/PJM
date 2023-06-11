#include <stdio.h>
#include <stdlib.h>


void sumar_matrices (int matriz_a[][3], int matriz_b[][3], int filas, int columnas)
{
    int matriz_c[filas][columnas];

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%d ", matriz_c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int filas, columnas;

    printf("Ingrese el n�mero de filas de las matrices: ");
    scanf("%d", &filas);

    printf("Ingrese el n�mero de columnas de las matrices: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];

    printf("Ingrese los elementos de la matriz A:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz_a[i][j]);
        }
    }

    printf("Ingrese los elementos de la matriz B:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz_b[i][j]);
        }
    }

    sumar_matrices(matriz_a, matriz_b, filas, columnas);

    return 0;
}
