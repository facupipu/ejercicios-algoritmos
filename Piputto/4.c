#include <stdio.h>
#include <stdlib.h>

void invertir(char* word){
  int length = 0;
  for (int i = 0; word[i] != 0 ; i++) {
    length ++;
  };
  char inverted[length];
  int reverse = length-1;
  for (int i = 0; i < length; i++) {
    inverted[reverse] = word[i];
     reverse --;
  };
  for (int i = 0; i < length; i++) {
    word[i] = inverted[i];
  };
}

int main (int argc, char *argv[]){
  char* word = argv[1];
  printf("%s\n", word);
  invertir(word);
  printf("%s\n", word);
  return 0;
}
