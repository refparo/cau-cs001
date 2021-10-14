#include <stdio.h>

int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

int is_leap(int y) {
  return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; 
}

void prev_day(int *y, int *m, int *d) {
  if (*d == 1)
    if (*m == 1) { (*y)--; *m = 12; *d = 31; }
    else if (*m == 3) { *m = 2; *d = 28 + is_leap(*y); }
    else { (*m)--; *d = months[*m - 1]; }
  else (*d)--;
}

int main() {
  int y, m, d;
  scanf("%d %d %d", &y, &m, &d);
  int days = 0;
  for (days = 0; !(y == 1990 && m == 1 && d == 1); days++)
    prev_day(&y, &m, &d);
  puts(days % 5 < 3 ? "fishing" : "sleeping");
  return 0;
}
