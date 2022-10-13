#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pares(int a[], int l){
  int p = 0;
  for (int j = 0; j < l; j++) {
    printf("%d /", a[j]);
    for (int i = j+1; i < l; i++) {
      if (a[j] + a[i] == 0) p++;
    }
  }
  return p;
}

int main (int argc, char *argv[]){
  int l = atoi(argv[1]);
  int a[l];
  srand(time(NULL));
  for (int i = 0; i < l; i++) {
    a[i] = (rand() % 100) -50;
  }
  int p = pares(a,l);
  printf("%d\n", p);
  return 0;
}
