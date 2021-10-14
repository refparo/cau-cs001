#include <stdio.h>
#include <math.h>

int prime(int x) {
  if (x == 3) return 1;
  int max = sqrt(x);
  int i = 3;
  while (x % i != 0 && i < max) i += 2;
  return x % i != 0;
}

int main() {
  int y, m, d;
  scanf("%d %d %d", &y, &m, &d);
  if (prime(y * 10000 + m * 100 + d)) printf("y");
  else printf("n");
  return 0;
}
