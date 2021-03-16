#include <stdio.h>

int main () {
  long long a, b;
  scanf("%lld %lld", &a, &b);
  printf("%lld", a * (1 << b));

  return 0;
}
