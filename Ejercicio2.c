#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Escribir una versión mejorada del programa para calcular
las raíces de una función cuadrática, del apunte anterior.
El programa debe imprimir un mensaje de error en los casos que el discriminante
sea menor a cero (raíz negativa) o el argumento a sea igual a cero (división por cero).
*/

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);

  double d = b * b - 4.0 * a * c;
  double root = sqrt(d);
  printf("x1: %.2f\n", (-b + root) / (2.0 * a));
  printf("x2: %.2f\n", (-b - root) / (2.0 * a));
  if ((d <= 0) || a == 0 ){
  printf("error\n");
  } else
  printf("error\n");
  return 0;
}
