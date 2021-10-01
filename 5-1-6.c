#include <stdio.h>

int is_leap(int year) {
  return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int main() {
  int y, m, d;
  scanf("%d,%d,%d", &y, &m, &d);
  int months[12] = {31, is_leap(y) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int ans = d;
  int i;
  for (i = 0; i < m - 1; i++) ans += months[i];
  printf("It is the %dth day.", ans);
  return 0;
}
