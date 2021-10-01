#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que acepte un argumento entero n e
 imprima n números aleatorios entre 0 y 100. Al finalizar
 el programa debe imprimir el valor promedio de los números que aparecieron.
*/

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int i = 0;
  while (i <= a) {
    printf("%d\n");
    i = i + 1;
  }
  return 0;
}
