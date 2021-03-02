#include <stdio.h>

int main () {
  // -2,147,483,648에서 2,147,483,647까지 저장가능한 a, b, c 정수
  long a, b, c;

  // 더하는 것이므로 a, b, c보다 클수있음
  // −9,223,372,036,854,775,807에서 +9,223,372,036,854,775,807까지 저장가능한 sum 정수
  long long sum;

  // a, b, c를 입력받음 (a, b, c는 long으로 선언했으므로 %li사용)
  scanf("%li %li %li", &a, &b, &c);
  sum = a + b + c; // 각 변수들을 더함

  // 더한값과 평균값을 출력
  // 평균값은 정수가 아닌 소수이므로 float 혹은 double로 형변환을 해야됨
  // long long은 %lli로, 소숫점 2째자리 반올림은 %.1lf로 출력
  printf("%lli\n%.1lf", sum, (double) sum / 3);
  
  return 0; // 정상 종료
}
