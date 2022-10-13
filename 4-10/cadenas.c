#include <stdio.h>
#include <stdlib.h>

int cadena (int n) {
  int d = n;
  printf("%d\n", n);
  int i = 2;
    while (n > 1) {
      while (n % i != 0) {
          i++;
      }
      n /= i;
      d += n;
      printf("%d\n", n);
      i = 2;
  }
  return d;
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  n = cadena(n);
  printf("%d\n", n);
  return 0;
}
