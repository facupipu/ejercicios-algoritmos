#include <stdio.h>
#include <stdlib.h>

// int binary_serch(int lo, int hi) {
//   if (hi - lo == 1) return lo;
//   int mid = lo + (hi - lo) / 2;
//   printf("Igual o mas grande que %d?\n", mid);
//   char response;
//   scanf("%c\n", &response);
//   getchar();
//   if (response == 'n') return binary_serch(lo , mid);
//   else return binary_serch(mid, hi);
// }

int serch(int a[], int k, int lo, int hi) {
  if (hi - lo == 1) return lo;
  int mid = lo + (hi - lo) / 2;
  printf("Igual o mas grande que %d\n", mid);
  char response;
  scanf("%c\n", &response);
  getchar();
  if (response == 'n') return binary_serch(lo , mid);
  else return binary_serch(mid, hi);
}

int int main(int argc, char *argv[]) {
  int k = atoi(argv[1]);
  int n = atoi(argv[2]);
  int a[n];

  for (int = 0; i < n; i++) {
    a[i] = i;
  }

  serch(a, k, 0, n-1);

  return 0;
}
