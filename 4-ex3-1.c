#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int p = 1, q = 1, r = 1, s;
  int i;
  for (i = 1; i < n; i++) {
    s = p + q + r;
    p = q; q = r; r = s;
  }
  printf("%d", p);
  return 0;
}
