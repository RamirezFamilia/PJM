#include <stdio.h>

/* Aplicaciones de un operador. */

void main(void)
{
    int i = 15, j, k, 1;

    j = (15 > i--) > (14 < ++i);
    printf("\nEl valor de j es: %d", j);

    k = ! (‘b‘ != ‘d‘) > (!i - 1);
    printf("\nEl valor de k es: %d", k);

    1 = (! (34 > (70 % 2))|| 0);
    printf("\nEl valor de 1 es: %d", 1);
}
