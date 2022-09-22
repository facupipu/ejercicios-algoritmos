/*
Escribir una funcion en C para pasar un string a mayusculas.
*/
#include <stdlib.h>
#include <stdio.h>

 void sm(char s){
   for (int i = 0; s[i] != 0; i++) {
     if (s[i] > 96 && s[i] < 122) {
       s[i] -= 32;
     }
   }
   printf("%s\n", s);
 }

int main(void) {
  sm("LEsta");
  return 0;
}
