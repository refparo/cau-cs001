#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int p = 0, q = 0, r = 1, s;
  int i;
  for (i = 0; i < n; i++) {
    r = p + q;
    p = q; q = r;
  }
  printf("%d", p);
  return 0;
}
