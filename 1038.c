#include <stdio.h>

int main () {
  int time;
  scanf("%d", &time);

  int namugi;

  int a = time / 3600;
  namugi = time % 3600;
  printf("시간 : %d\n", a);

  int b = namugi / 60;
  namugi = namugi % 60;
  printf("분 : %d\n", b);
  printf("초 : %d\n", namugi);

  return 0;
}
