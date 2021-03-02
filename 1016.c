#include <stdio.h>

int main (){
  int r;
  
  scanf("%d", &r);
  printf("반지름 : %d\n", r);
  printf("둘레 : %f\n", (float) 2 * r * 3.14);
  printf("넓이 : %f\n", (float) r * r * 3.14);
  
  return 0;
}
