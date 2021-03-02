#include <stdio.h>

int main () {
  int max;
  int arr[10000] = {};

  scanf("%d", &max);

  for (int i = 0; i < max; i++) {
    arr[i] = 0;
  }

  for (int i = 0; i < max; i++) {
    int num;

    scanf("%d", &num);
    arr[num - 1]++;
  }

  for (int i = 0; i < 23; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}
