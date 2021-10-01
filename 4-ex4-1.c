#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int i, prod = 1;
  float sum = 1.0;
  for (i = 1; i <= n; i ++) {
    prod *= i;
    sum += 1.0 / prod;
  }
  printf("%.6f", sum);
  return 0;
}
