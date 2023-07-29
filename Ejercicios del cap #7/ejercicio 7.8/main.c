 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

/* Minuscula y mayuscula.

El programa, al recibir como dato un arreglo unidimensional de tipo cadena de carateres
, determina el numero de minusculas y mayusculas que hay en cada cadena. */

void minymay (char cad);

int main ()
{
    int i, n;
    char FRA[20][50];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
      printf("Ingrese la línea %d de texto: ", i+1);
      fflush(stdin);
      gets(FRA[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
    minymay(FRA[i]);
}

void minymay(char *cadena)
{
    int i=0, mi=0, ma=0;

    while(cadena[i] != '\0')
    {
        if(islower(cadena[i]))
        {
            mi++;
        }
        else
        {
            if (issupper(cadena[i]))
            {
                ma++;
            }
        }
        i++;
    }
}


