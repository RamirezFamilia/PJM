#include <stdio.h>
#include <stdlib.h>

void Rango(int);

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

void main(void)
{
    float CAL;
    printf("Ingresa la primera calificacion del alumno: ");
    scanf("%f", &CAL);
    while (CAL != -1)
    {
        Rango(CAL);
        printf("Ingresa la siguiente calificacion del alumno: ");
        scanf("%f", &CAL);
    }
    printf("\n 0..3.99 = %d", RA1);
    printf("\n 4..5.99 = %d", RA1);
    printf("\n 6..7.99 = %d", RA1);
    printf("\n 8..8.99 = %d", RA1);
    printf("\n 9..10 = %d", RA1);
}

void Rango(int VAL)
{
    if (VAL < 4)
        RA1++;
    else
        if (VAL < 6)
        RA2++;
    else
        if (VAL < 8)
        RA3++;
    else
        if (VAL < 9)
        RA4++;
    else
        RA5++;
}
