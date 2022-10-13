#include <stdio.h>

int reyes(int n){
  if (n > 9) {
    return 0;
  }
}

int sum (int a, int b){
  int max = 20 + a + b;
  return max;
}

int max(int a, int b){
  return a >= b ? a : b;
}

int envido(int a, char ap, int b, char bp, int c, char cp){
  int e = 0;
  a = reyes(a);
  b = reyes(b);
  c = reyes(c);
  if (ap != bp && bp != cp && cp != ap) {
    e = max(max(a,b),c);
  }
  else if (ap == bp && bp == cp && cp == ap){
    e = max(max(a+b, b+c), a+c) + 20;
  }
  else {
    if (ap == bp) e = sum(a,b);
    else if (ap == cp) e = sum(a,c);
    else e = sum(c,b);
  }
  return e;
}

  int main(void) {
  int env = envido(12,'c',10,'c',11,'c');
  printf("%d\n", env);
  return 0;
}
