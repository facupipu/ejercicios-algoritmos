/*
Escribir una funcion llamada is_triangle() que acepte tres argumentos enteros. Devolver true si los tres argumentos pueden ser las longitudes A, B y C de un triangulo. De lo contrario devolver false. Un triangulo cualquiera tiene que cumplir que
A + B > C
B + C > A
C + A > B
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool is_triangle(int a, int b, int c){
  bool triangulo = false;
  if (a+b>c && b+c>a && c+a>b) {
    triangulo = true;
  }
  return triangulo;
}

int main(void) {
  if (is_triangle(2,7,1)) printf("TRUE\n");
  else printf("FALSE\n");

  return 0;
}
