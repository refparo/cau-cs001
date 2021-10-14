#include <stdio.h>

int main() {
  char str[128];
  gets(str);
  int digit = 0, space = 0, other = 0;
  int i;
  for(i = 0; str[i] != 0; i++)
    if (str[i] >= '0' && str[i] <= '9') digit++;
    else if (str[i] == ' ') space++;
    else other++;
  printf("%d %d %d", digit, space + 1, other);
  return 0;
}
