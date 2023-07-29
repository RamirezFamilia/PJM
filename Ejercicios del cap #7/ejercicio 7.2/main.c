#include<stdio.h>
#include<conio.h>

int main ()
{
    char p1, p2, p3 = '$';

    printf("Ingrese un caracter: ");
    p1=getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);

    printf("El carater de p3 es : ") ;
    putchar(p3);
    printf("\n");

    printf("Ingrese otro caracter: ");
    fflush(stdin);
    scanf("%s",&p2);
    scanf("%s",&p2);

    getch ();
    return 0;
}

