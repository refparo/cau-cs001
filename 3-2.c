#include <stdio.h>

float max(float a, float b) {
  return a > b ? a : b;
}

int main() {
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  printf("%.2f", max(a, max(b, c)));
  return 0;
}
