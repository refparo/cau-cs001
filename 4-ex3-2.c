#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int max = num;
  while (num != 1) {
    if (num % 2 == 0) num /= 2;
    else num = num * 3 + 1;
    if (num > max) max = num;
  }  
  printf("%d", max);
  return 0;
}
