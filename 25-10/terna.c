#include <stdio.h>
#include <stdlib.h>

int max_in_array(int a[], int n){
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) max = a[i];
  }
  return max;
}

int min_in_array(int a[], int n){
  int min = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) min = a[i];
  }
  return min;
}

void cleararray(int a[], int n){
  for (int i = 0; i < n; i++) {
    a[i] = 0;
  }
}

void count_sort(int a[], int n) {
  int max = max_in_array(a,n);
  int min = min_in_array(a,n);
  int freqs[max - min + 1];
  int aux[n];
  cleararray(freqs, max - min + 1);
  for (int i = 0; i < n; i++) {
    freqs[a[i]-min] ++;
  }
  int i = 0;
  int j = 0;
  while (i < n) {
    if (freqs[j] != 0) {
      aux[i] = j + min;
      freqs[j]--;
      i++;
    }
    else j++;
  }
  for (int i = 0; i < n; i++) {
    a[i] = aux[i];
  }
}

int threesum(int a[], int n){
  int i = 0;
  int c = 0;
  while (i < n-2) {
    int j = i+1;
    int k = n-1;
    while (j < k) {
      int sum = a[i] + a[j] + a[k];
      if (sum == 0)     { c++; j++; k--;}
      else if (sum < 0) j++;
      else              k--;
    }
    i++;
  }
  return c;
};

void print_array(int a[], int n){
  for (int i = 0; i < n; i++) {
    printf("%d ,", a[i]);
  }
}

int main(void) {
  int a[] = {1,-5,-7,2,7,0,3,1,-2};
  int n = 9;
  count_sort(a, n);
  printf("%d\n", threesum(a, n));
  print_array(a, n);
  return 0;
}
