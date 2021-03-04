#include <stdio.h> // 표준입출력 불러오기

int main () {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      printf("*"); // 해당 별 개수 대로 출력
    }
    printf("\n"); // 줄바꿈
  }

  return 0; // 정상 종료임을 컴퓨터에게 알려줌
}
