#include <stdio.h>

int main() {
  int n, prod = 1;
  scanf("%d", &n);
  for (; n > 0; n--) prod *= n;
  printf("%d", prod);
  return 0;
}
