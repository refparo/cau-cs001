#include <stdio.h>

int main() {
  int m, n;
  scanf("%d %d", &m, &n);
  int gcd = m < n ? m : n;
  while ((gcd > 1) && ((m % gcd != 0) || (n % gcd != 0))) gcd--;
  printf("%d %d", gcd, m * n / gcd);
  return 0;
}
