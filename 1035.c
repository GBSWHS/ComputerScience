#include <stdio.h>

int main () {
  long long a, b, c;
  scanf("%lld %lld %lld", &a, &b, &c);

  long long sum = a+b+c;
  double avg = (double) sum / 3;

  printf("%lld\n%.1lf", sum, avg);

  return 0;
}
