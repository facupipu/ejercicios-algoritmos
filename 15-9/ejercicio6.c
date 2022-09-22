/*
Escribir una funcion para imprimir un array de enteros en C. Aceptar como argumentos el array y su
longitud.
*/
#include <stdlib.h>
#include <stdio.h>

void arr(int array[], int longitud){
  for (int i = 0; i < longitud; i++) {
    printf("%d\n", array[i]);
  }
}

int main(void) {
  int longitud = 6;
  int array[] = {
    1,
    2,
    3,
    4,
    5,
    6
  };
  arr(array,longitud);
  printf("\n\n\n\n\n\n\n longitud %d\n", longitud);
  return 0;
}
