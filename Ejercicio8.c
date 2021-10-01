#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que acepte un argumento entero
 n y use dos loops anidados para imprimir un patrón
  como el de un tablero de ajedrez usando asteriscos
   y espacios con n filas y columnas.
*/

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ((i % j == 0) || (j % i == 0))
        printf("* ");
      else
        printf("  ");
    }
    printf("%d\n", i);
  }
  return 0;
}
