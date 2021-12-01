#include <stdio.h>

int hanoi_steps(int n) {
  if (n == 1) return 1;
  else return 2 * hanoi_steps(n - 1) + 1;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", hanoi_steps(n));
  return 0;
}
