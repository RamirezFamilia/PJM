#include <stdio.h>
#include <stdlib.h>

void fi(void);
int K = 5;

void main(void)
{
    int I;
    for (I = 1; I<= 3; I++)
        fi();
}
void fi(void)
{
    int K = 2;
    K += K;
    printf("\n\n El valor de la variable local es: %d", K);
    ::K = ::K + K;
    printf("\n El valor de la variable global es: %d", ::K);
}
