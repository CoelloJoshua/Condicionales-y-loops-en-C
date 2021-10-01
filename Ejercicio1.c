#include <stdio.h>
#include <stdlib.h>

/*
Escribir un programa que acepte
tres argumentos enteros e imprima
"iguales" si los tres números son
iguales o "no iguales" de lo contrario.
*/
int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

if ((a == b == c) || a == b){
printf("Iguales\n");
} else
printf("No Iguales\n");

    return 0;
}
