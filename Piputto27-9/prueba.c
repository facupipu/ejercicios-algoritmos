#include <stdio.h>
#include <stdlib.h>

//ejercicio 1
void letras(char * w, char l){
  for (int i = 0; w[i] != 0 ; i++) {
    if ( w[i] == l || w[i] == l-32 ) {
        w[i] = '?';
    }
  }
}
//ejercicio 2
int power(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++) {
      result = result * a;
    }
    return result;
}
//ejercicio 3

int catalan(int n){
  }

int main(void) {
  char incognita[] = "AAAbbbaaaBBBabcde";
  letras(incognita, 'a');
  int result = power(5, 3);
  printf("%d\n", result);
  int n = catalan(4);
  printf("%d\n", n);
  return 0;
}
