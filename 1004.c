#include <stdio.h>

int main () {
  int score; // 점수를 받음
  scanf("%d", &score);

  if (score > 89) printf("A"); // 100~90라 했으므로 89 초과이면 A
  else if (score > 69) printf("B"); // 69 초과이면 B
  else if (score > 39) printf("C"); // 39 초과이면 C
  else printf("D"); // 나머지는 D
  
  return 0; // 정상종료
}
