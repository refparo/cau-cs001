#include <stdio.h>

int main() {
  int sum = 0, i;
  for (i = 1; i <= 100; i++) sum += i;
  printf("%d", sum);
  return 0;
}
