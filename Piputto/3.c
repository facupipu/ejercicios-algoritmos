#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primo(int n){
  bool primo = true;
  for (int divisor = n-1; divisor > 1; divisor--) {
    if (n % divisor == 0) {
      primo = false;
    };
  }
  return primo;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  bool es_primo = primo(n);
  if (es_primo) {
    printf("Primo\n");
  }
  else printf("No primo\n");
  return 0;
}
