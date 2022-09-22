/*
Escribir una funcion que acepte tres argumentos enteros y devuelva true si los tres argumentos son iguales o false de lo contrario.
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool f(int a, int b, int c){
  bool iguales = false;
  if (a==b && b==c) {
    iguales = true;
  }
  return iguales;
}

int main(void) {
  if (f(2,2,1)) printf("Son iguales\n");
  else printf ("No son iguales\n");
  return 0;
}
