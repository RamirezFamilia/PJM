#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int ELE[5] = {0};
    int I, VOT;
    printf("Ingresa el primer voto (0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT < 6))
            ELE[VOT-1]++;
        else
        printf("\n\n El voto es incorrecto.\n");
        printf("Ingresa el siguiente voto (0 - para terminar): ");
        scanf("%d", &VOT);
    }
    printf("\n\n Resultado de la Eleccion\n");
    for (I = 0; I <= 4; I++)
        printf("\nCandidato %d: %d", I+1, ELE[I]);
}
