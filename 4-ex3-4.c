#include <stdio.h>

int main() {
  int m, n, k;
  for (m = 0; 5 * m <= 100; m++)
    for (n = 0; 5 * m + 3 * n <= 100; n++) {
      k = 100 - m - n;
      if ((k % 3 == 0)  && (5 * m + 3 * n + k / 3 == 100))
        printf("%d %d %d\n", m, n, k);
    }
  return 0;
}
