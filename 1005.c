#include <stdio.h>

int main () {
  int max; // 최대값을 받음
  scanf("%d", &max);

  for (int i = 0; i <= max; i++) { // 0에서 최대값까지 반복
    printf("%d\n", i); // i변수를 출력
  }
  
  return 0; // 정상종료
}
