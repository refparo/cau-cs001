#include <stdio.h>

int main() {
  int m, n, sum = 0;
  scanf("%d %d", &m, &n);
  int i;
  for (i = n; i <= m; i += n) sum += i;
  printf("%d", sum);
  return 0;
}
