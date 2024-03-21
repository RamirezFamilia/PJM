#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};

void Lectura(struct empleado a*)
{
    printf("\ningrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("__ -ingrese la direccion del empleado__ -");
    printf("\n\tcalle: ");
    gets(a->direccion.calle);
    printf("\tnumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tcodigo postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tlocalidad: ");
    gets(a->direccion.localidad);
}

void main(void)
{
    struct empleado e0 = {"arturo", "compras", 15500.75, "san jeronimo", 120, 3490, "toluca"};
    struct empleado *e1, *e2, e3, e4;
    e1 = new (struct empleado);
    printf("\ningrese el nombre del empleado 1: ");
    scanf("%s", &(*e1).nombre);
    fflush(stdin);
    printf("ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("__ -ingrese la direccion del empleado__ -");
    printf("\n\tcalle: ");
    fflush(stdin);
    gets(e1->direccion, calle);
    printf("\tnumero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tcodigo postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\tlocalidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);

    printf("\ningrese el nombre del empleado 3: ");
    scanf("%s", &(*e3).nombre);
    fflush(stdin);
    printf("ingrese el departamento de la empresa: ");
    gets(e3->departamento);
    printf("ingrese el sueldo del empleado: ");
    scanf("%f", &e3->sueldo);
    printf("__ -ingrese la direccion del empleado__ -");
    printf("\n\tcalle: ");
    fflush(stdin);
    gets(e3->direccion, calle);
    printf("\tnumero: ");
    scanf("%d", &e3->direccion.numero);
    printf("\tcodigo postal: ");
    scanf("%d", &e3->direccion.cp);
    printf("\tlocalidad: ");
    fflush(stdin);
    gets(e3->direccion.localidad);

    lectura(e2);

    lectura(&e4);

    printf("datos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",  e1->nombre,  e1->departamento,  e1>sueldo,  e1->direccion.calle,  e1->direccion.numero,  e1->direccion.cp, e1->direccion.localidad);

    printf("datos del empleado 4\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s",  e4->nombre,  e4->departamento,  e4>sueldo,  e4->direccion.calle,  e4->direccion.numero,  e4->direccion.cp, e4->direccion.localidad);
}
