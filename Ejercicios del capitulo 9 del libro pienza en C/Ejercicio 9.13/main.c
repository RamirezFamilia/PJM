#include <stdio.h>
#include <stdlib.h>

int cuenta(char);

void main(void)
{
    int res;
    char car;
    printf("\n ingrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf("\n ingrese el caracter que se va a burcar en el archivo: ");
    else
        printf("no se pudo abrir el archivo");
}

int cuenta(char car)
{
    int res, con = 0;
    char p;
    FILE *ar;
    if ((ar = fopen ("arc.txt", "r")) != NULL)
    {
        while (!feof(ar))
        {
            p = getc(ar);
            if (p == car)
                con++;
        }
        fclose(ar);
        res = con;
    }
    else
        res = -1;
    return (res);
}
