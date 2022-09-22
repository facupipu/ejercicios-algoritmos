#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int parse_int (char* arg){
  int numero = 0;
  bool negativo = false;
  for (int i = 0; arg[i] != NULL; i++) {
    if (arg[i] >= '0' && arg[i] <= '9' && arg[i-1] >= '0' && arg[i-1] <= '9' ) numero *= 10;

    if (arg[i] >= '0' && arg[i] <= '9') {
      numero += arg[i] - '0';
    };
    if (arg[i] == '-') {
      negativo = true;
    }
  };
  if (negativo) numero *= (-1);
  return numero;
}

int main (int argc, char *argv[]){
  char* arg = argv[1];
  int numero = parse_int(arg);
  printf("%d\n", numero);
  return 0;
}
