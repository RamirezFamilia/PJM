#include <stdio.h> /* Estas son librerias estandar del lenguaje C las cuales son necesarias para la entrada y salida de datos */
#include <stdlib.h>
#include <time.h> /*Esta libreria nos sirve para generar numeros aleatorios y trabajar con el tiempo*/

#define ARRAY_SIZE 100 /*En esta linea se define una macro llamada ARRA_SIZE la cual se utiliza para especificar el tamaño de un arreglo, que en nuestro caso es de 100*/

int i; /* Esta es la declaracion de una variable de tipo entero, la cual utilizaremos como indice para los bucles "for" */

int change; /*Esta es otra declaracion de una variable de tipo entero la cula se utiliza para indicar si ha habido cambio durante una pasada del aogoritmo de ordenacion */

int n; /*Otra declaracion de una variable de tipo entero que almacenara el tamaño del arreglo */

int a[ARRAY_SIZE]; /*Es el arreglo que contiene los numeros aleatorios */

int buf; /*Esta es una variable temporal para intercambiar valores durante el proceso de ordenacion */

time_t seed; /* Se utiliza para inicializar la generacion de numeros aleatorios */

int main(int argc, char* argv[]) /* La funcion main es el punto de entrada del programa */
{
  seed = 0;
  srand(time(&seed)); /* En esta parte se inicializa la semilla para que se generen los numeros aleatorios utilizando el tiempo actual como referencia */

  n = sizeof(a) / sizeof(*a); /* En esta parte se calcula el tamaño del arregla "a" dividiendo el tamano del arreglo completo entre el tamano de un elemento individual del arreglo. Con esto garantizamos que "n" almacenara la cantidad real de elementos en el arreglo */

  for (i = 0; i <= n-1; i++) /* Realizamos un for para poder llenar el arreglo "a" con numeros del 0 al 999 utilizando la funcion "rans()" */
  {
    a[i] = rand() % 1000;
  }

  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]); /* En esta parte indicamos para que se impriman el contenido del arreglo "a" antes de ser ordenados */
  }
   /* Aqui comienza el algoritmo de ordenacion el cual consiste en comparar cada par de elementos adyacentes en el arreglo intercambiando
   si estan en orden incorrecto. Este proceso se repide hasta que no se realicen intercambios en un paso completo del arreglo */
  change = 1;
  while (change == 1)
  {
    change = 0;
    for (i = 0; i <= n-2; i++)
    {
      if (a[i] > a[i+1]) /* En dado caso que se quiera que el orden sea de mayor a menor podemos intercambiar la condicion */
      {
        buf = a[i];
        a[i] = a[i+1];
        a[i+1] = buf;
        change = 1;
      }
    }
  }
  printf("\n----------------------------\n");
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]); /* Ta en esta parte imprimimos el arreglo ya ordenado de menor a mayor */
  }
  return 0;
}
