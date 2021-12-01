#include <stdio.h>

int max(int a, int b) {
  return a >= b ? a : b;
}

int main() {
  int m, b;
  int i;
  scanf("%d", &m);
  for (i = 0; i < 7; i++) {
    scanf("%d", &b);
    m = max(m, b);
  }
  printf("%d", m);
  return 0;
}
