#include <stdio.h>

int main () {
  int a;
  float b;
  scanf("%d", &a);

  b = a * 950 * 3.0e-23;
  printf("%e", b);

  return 0;
}

