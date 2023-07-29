#include<stdio.h>
#include<conio.h>

int main ()
{
   char *cad0 = "Buenos dias";

   char cad1 [20] = "Hola";

   char cad2 [] = "Mexico";

   char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

   char cad4[40], cad5[50], cad6[20];

   printf("La cadena cad0 es: ");
   puts(cad0);

   printf("La cadena cad1 es: %s",cad1);

   printf("La cadena cad2 es: ");
   puts(cad2);

   printf("La cadena cad3 es: ");
   puts(cad3);
   printf("\n");

   printf("Ingrese la linea de texto: \n");
   gets(cad4);

   printf("La cadena cad4: ");
   puts(cad4);
   fflush(stdin);

   printf("Ingrese una linea de texto: \n");
   scanf("%s", cad5);

   char p;

   int i = 0;

   printf("Ingrese una linea de texto: \n");
   puts(cad5);

   while ((p = getchar ()) != '\n')
   cad6[i++] = p;
   cad6[i] = '\0';

   printf("\nLa cadena cad6 es: ");
   puts(cad6);

    getch ();
    return 0;
}

