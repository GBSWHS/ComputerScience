#include <stdio.h>

int main () {
  int max; // 받을 값들 수
  int arr[10000] = {}; // 10000개까지 받을 수 있는 배열

  scanf("%d", &max);

  // 사용할 배열부분을 0으로 초기값 지정
  for (int i = 0; i < max; i++) {
    arr[i] = 0;
  }

  for (int i = 0; i < max; i++) {
    int num;

    scanf("%d", &num);
    arr[num - 1]++; // 입력받은 배열 장소에 1을 더함
  }

  // 배열의 23번 값까지 출력
  for (int i = 0; i < 23; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0; // 정상종료
}
