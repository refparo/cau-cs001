#include <stdio.h>

int main() {
  int fac = 1, i;
  scanf("%d", &i);
  for (; i > 1; i--) fac *= i;
  printf("%d", fac);
  return 0;
}
