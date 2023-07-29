#include<stdio.h>
#include<conio.h>
#include<ctype.h>

// Decodifica.
//El programa decodifica una cadena de caracteres compuesta por números y letras.

void interpretar (char *);

void main (void)  // funcion
{
    char cad[50];

    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpretar(cad);

    getch ();
    return 0;
}

void interpretar (char *cadena)
{
    int i=0, j, k;

    while (cad[i] != '\0')
    {
        if (isalpha (cad[i]))
        {
            k = cad[i-1]-48;
            for (j=0,j<k;j++)
            {
                putchar(cad[i]);
            }
            i++;
        }
    }

}

