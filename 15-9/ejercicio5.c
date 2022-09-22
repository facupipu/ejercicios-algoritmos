/*
Escribir una funcion random(int a, int b) que devuelva un entero aleatorio entre a y b.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

 int nrandom(int a, int b){
   srand(time(NULL));
   if (a < b) {
     int temp = b;
     b = a;
     a = temp;
   }
   int entale = (rand() % (a + 1 - b)) + b;
   return entale;
  }


int main(void) {
  printf("%d\n", nrandom(187, 9));
  return 0;
}
