#include <stdio.h>
#include <stdlib.h>

/* Maximo comun divisor.
El programa, al recibir como datos dos numeros enteros, calcula
el maximo comun divisor de dicho numeros. */

 int mcd(int, int);
 void main(void)
 {
     int NU1, NU2, RES;
     printf("\nIngresa los dos numeros enteros: ");
     scanf("%d %d", &NU1, &NU2);
     RES = mcd (NU1, &NU2);
     printf("\nEl maximo comun divisor de %d y %d es: %d", NU1, NU2, RES);

 }

 int mcd(int N1, int N2)
 {
     int I;
     if (N1 < N2)
        I = N1 / N2;
     else
        I = N2 / 2;
     while ((N1 % I) || (N2 % I))
        I --;
     return I;
 }
