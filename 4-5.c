#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  float sum = 1.0;
  for (; n > 1; n--)
    if (n % 2 == 0) sum += 1.0 / n;
    else sum -= 1.0 / n;
  printf("%.3f", sum);
  return 0;
}
