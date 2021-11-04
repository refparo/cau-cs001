#include <stdio.h>

int main() {
  int i;
  double sum = 0;
  for (i = 1; i <= 10001; i++)
    sum += (i % 2 * 2 - 1.0) / i;
  printf("%.6f", sum);
  return 0;
} 
