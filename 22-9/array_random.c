#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_n(int lo, int hi){
  return (rand() % (hi - lo) + lo);
}

void random_array(int a[], int size, int lo, int hi){
  for (int i = 0; i < size; i++) {
    a[i] = random_n(lo,hi);
  }
}

int main(int argc, char *argv[]){
  int a_size = atoi(argv[1]);
  int lo = atoi(argv[2]);
  int hi = atoi(argv[3]);
  srand(argv[4]);
  int a[a_size];
  random_array(a,a_size,lo,hi);
  return 0;
}
