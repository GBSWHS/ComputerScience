#include <stdio.h>

int main (){
  char a, b, c;
  
  scanf("%c %c %c", &a, &b, &c);
  printf("%c%c%c reversed is %c%c%c", a, b, c, c, b, a);
  
  return 0;
}
