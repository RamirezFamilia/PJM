#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0 = "Buenos dias";

    char cad[20] = "Hola";

    char cad2[] = "Mexico";

    char cad3[] = {'b', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

    char cad4[20], cad5[20], cad6[20];

    printf("\nLa cadena ca0 es: ");
    puts(cad0);
    printf("\nLa cadena cas2 es: ");
    puts(cad3);

    printf("\nIngrese una linea da texto -se lee con gets-: \n");
    gets(cad4);
    printf("\nL cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\nIngrese una linea de texto -se lee con scanf-: \n");
    scanf("%s", cad5);
    printf("\nLa cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;
    printf("\nIngrse una linea da texto -se lee cada caracter con getchar-: \n");

    while ((p = getchar())!= '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("\nLa cadena cad6 es: ");
    puts(cad6);
}
