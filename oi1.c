#include <stdio.h>

int reverse(int y, int n) {
  // y = x - (x + 1) / (n + 1)
  //   = x * n / (n + 1) - 1 / (n + 1)
  // => x = (y * (n + 1) + 1) / n
  return (y * (n + 1) + 1) / n;
}

int main() {
  int i;
  int res = 11;
  for (i = 4; i > 0; i--)
    res = reverse(res, i);
  printf("%d", res);
  return 0;
}
