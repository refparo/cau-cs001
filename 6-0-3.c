#include <stdio.h>

// 辗转相除法
int gcd(int x, int y) {
  int temp;
  if (x < y) {
    temp = x; x = y; y = temp;
  }
  for (temp = x % y; temp != 0; temp = x % y) {
    x = y; y = temp;
  }
  return y;
}

int lcm(int x, int y) {
  return x * y / gcd(x, y);
}

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  printf("%d %d", gcd(x, y), lcm(x, y));
  return 0;
}
