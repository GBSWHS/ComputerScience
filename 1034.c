#include <stdio.h>

int main () {
  long long a, b;

  scanf("%d %d", &a, &b);
  printf("%lld\n", a + b);
  printf("%lld\n", a - b);
  printf("%lld\n", a * b);
  printf("%lld\n", a / b);
  printf("%lld\n", a % b);

  printf("%.2lf", (double) a / (double) b);

  return 0;
}
