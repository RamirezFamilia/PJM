#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cuentap(char *);

void main(void)
{
    int i;
    char fra[50];
    printf("\n ingrese la linea de texto: ");
    gets(fra);
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\n la linea de texto tiene %d palabras", i);
}

int cuentap(char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, " ");
    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr (cad + 1, " ");
    }
    return (i);
}
