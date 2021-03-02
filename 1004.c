#include <stdio.h>

int main () {
  int score;
  scanf("%d", &score);

  if (score > 89) printf("A");
  else if (score > 69) printf("B");
  else if (score > 39) printf("C");
  else printf("D");
  
  return 0;
}
