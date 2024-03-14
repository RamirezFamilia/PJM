#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0 = "hola mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "xx");
    printf("\nprueba de la funcion strcpy. se copia la cadena xx a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nprueba de la funcion strncpy. se copia 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nprueba de la funcion strncpy. se copia 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nprueva de la funcion strcat. se incorpara la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, "yy");
    printf("\nprueva de la funcion strcat. se incorpara la cadena yy a cad1: %s\n", cad1);

    strcat(cad2, " ");
    strncat(cad2, cad0, 4);
    printf("\nprueba de la funcion strncat. se incarporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "mexico");
    printf("\nprueba de la funcion strstr. se trata de localizar la cadena mexico dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "guatemala");
    printf("\nprueba de la funcion strst. se trata de localizar la cadena guatemala dentro de cad0: %s\n", cad0);

}
