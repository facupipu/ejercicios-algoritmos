#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int min_value (int array[]){
  int min_value = INT_MAX;
  for (int i = 0; array[i] != NULL ; i++) {
    if (array[i] < min_value){
        min_value = array[i];
    }
  }
  return min_value;
}

int main(void) {
  int values[] = {
    4,
    7,
    10,
    2,
    8,
    100,
    -12,
    -1,
    2
  };
  int lowest = min_value(values);
  printf("%d\n", lowest);
  return 0;
}
