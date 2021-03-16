#include <stdio.h>
#define SECONDS_IN_YEAR 31560000

int main () {
  long long year;
  scanf("%d", &year);
  printf("%lld", year * SECONDS_IN_YEAR);

  return 0;
}
