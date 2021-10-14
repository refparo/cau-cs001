#include <stdio.h>

void real_main() {
  int n;
  scanf("%d", &n);
  char str[21] = {0};
  int i = 20;
  while (n > 0) {
    str[i] = '*';
    str[i - 1] = '0' + (char) (n % 10);
    n /= 10;
    i -= 2;
  }
  printf("%s", str + i + 1);
}

int main() {
  real_main();
  return 0;
}
