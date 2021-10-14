#include <stdio.h>
#include <math.h>

int main() {
  float x;
  scanf("%f", &x);
  float prod = 1.0, sum = x;
  float item = x;
  int i;
  for (i = 1; fabs(item) >= 1e-5; i++) {
    prod *= 2 * i * (2 * i + 1);
    item = pow(x, 2 * i + 1) / prod;
    if (i % 2 == 0) sum += item;
    else sum -= item;
  }
  printf("%.6f", sum);
  return 0;
}
