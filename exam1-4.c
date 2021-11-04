#include <stdio.h>

int main() {
  int a = 1, b = 1, c;
  float sum = 0;
  int i;
  scanf("%d", &i);
  for (; i > 0; i--) {
    c = a + b;
    a = b; b = c;
    sum += (float) b / a;
  }
  printf("%.2f", sum);
  return 0;
}
