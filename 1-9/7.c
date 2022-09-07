#include <stdio.h>

void print_array (int a[], int lenght) {
  for (int i = 0;  i < lenght;  i++) {
    printf("%d\n", a[i]);
  }
  printf("\n");
}

int main(void) {
  int a[] = {1,2,3,4};
  int b[] = {34,18,5,73,1,82};
  int c[] = {0};
  print_array(a,4);
  print_array(b,6);
  print_array(c,1);
  return 0;
}
