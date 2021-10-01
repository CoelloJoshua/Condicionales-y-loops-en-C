#include <stdio.h>
#include <stdlib.h>


/*
Reescribir el ejercicio 1 del primer apunte,
 pero esta vez usando un argumento de línea de
 comandos para determinar cuántas veces imprimir "Hola mundo".
*/

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
    int i = 1;
  while (i <= a) {
    printf("Hola mundo\n");
    i = i + 1;
  }
  return 0;
}
