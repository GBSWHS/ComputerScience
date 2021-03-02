#include <stdio.h>

int main () {
  long a, b, c;
  long long sum;

  scanf("%li %li %li", &a, &b, &c);
  sum = a + b + c;

  printf("%lli\n%.1lf", sum, (double) sum / 3);
  
  return 0;
}
