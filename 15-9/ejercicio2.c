/*
Escribir una funcion saludar(char *s) que reciba un argumento tipo string (puntero a char). La funcion imprime un saludo en pantalla usando el argumento que le pasamos. Por ejemplo la llamada a saludar("Juan") imprime Hola, Juan.
*/
#include <stdio.h>
#include <stdlib.h>


void saludar(char *s){
  printf("hola %s\n", s);
}


int main(void) {
  saludar("Juan");
  
  return 0;
}
