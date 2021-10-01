#include <stdio.h>
#include <stdlib.h>


/*
Escribir un programa que imprima los números entre
 el 1000 y el 1999, mostrando 5 números por línea.
*/

int main(int argc, char *argv[]) {
    int a = 1999;
    int i = 1000;
  while (i <= a) {
    printf("%d %d %d %d %d\n");
    i = i + 1;
  }
  return 0;
}
