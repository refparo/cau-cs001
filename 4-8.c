#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int count;
  int sum = 0;
  for (count = 0; num > 0; count++) {
    sum += num % 10;
    num /= 10;
  }
  printf("count=%d\nsum=%d", count, sum);
  return 0;
}
