#include <stdio.h>

int main() {
  int num, i;
  for (i = 0; i < 3; i++) {
    scanf("%d", &num);
    if (num % 2 == 1) printf("%d is odd number!\n", num);
  }
  return 0;
}
