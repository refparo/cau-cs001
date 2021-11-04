#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int even = 0, odd = 0, all = 0;
  for (; num > 0; num--) {
    if (num % 2 == 0) even += num;
    else odd += num;
    all += num;
  }
  printf("%d\n%d\n%d", even, odd, all);
  return 0;
} 
