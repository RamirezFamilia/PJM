#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longitud(char cad);

void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];
    printf("\n ingrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto. maxima 50 caracteres: ", i+1);
        fflush(stdin);
        gets(FRA[i]);
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud (cad);
        if (t > l)
        {
            l = t;
            p = i;
        }
    }
    printf("\n la cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("\n longitud: %d", l);
}

int longitud(char *cadena)
{
    int cue = 0;
    while (! cadena[cue] == '\0')
        cue++;
    return (cue);
}
