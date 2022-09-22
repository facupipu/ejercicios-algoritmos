#include <stdio.h>
#include <stdlib.h>
//declara las funciones

int suma (int a, int b){
  return a+b;
};

void hola(){
  printf("hola\n");
  int a = 3;
  int b = 1;
  int sumade3y1 = suma(a,b);
  printf("%d %d %d\n", sumade3y1, a, b);
};

int main(void) {
  hola();
  return 0;
}
/* Funcion:
 tipo_dato nombre_funcion (){

 tipo_dato= bool,int,char,double,float
*/
