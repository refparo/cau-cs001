#include <stdio.h>

#define PI 3.141592657

int main() {
  double rho = 11340.0;
  double d_outer, d_inner;
  scanf("%lf %lf", &d_outer, &d_inner);
  double r_outer = d_outer / 100 / 2;
  double r_inner = d_inner / 100 / 2;
  double m = rho * PI * (r_outer * r_outer * r_outer - r_inner * r_inner * r_inner) * 4 / 3;
  printf("%.2lf", m);
  return 0;
}
