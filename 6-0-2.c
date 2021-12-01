#include <stdio.h>

float add(float a, float b) {
  return a + b;
}

int main() {
  float a, b;
  scanf("%f %f", &a, &b);
  printf("%.2f", add(a, b));
  return 0;
}
