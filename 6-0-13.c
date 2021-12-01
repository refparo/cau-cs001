#include <stdio.h>

int fac(int n) {
  int prod = 1;
  int i;
  for (i = 2; i <= n; i++) prod *= i;
  return prod;
}

int main() {
  int n;
  scanf("%d", &n);
  int sum = 0;
  for (; n > 0; n--) sum += fac(n);
  printf("%d", sum);
  return 0;
}
