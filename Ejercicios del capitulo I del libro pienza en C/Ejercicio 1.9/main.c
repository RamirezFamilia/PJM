#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float ECA;
    printf("\nIngresa la extension de la estancia: ");
    scanf("%f", &ECA);
    ECA = ECA * 0.4047;
    printf("\nEntencion de la estancia en hectareas: %5.2f" , ECA);
}
