#include <stdio.h>

int main() {
  char s[20];
  gets(s);
  int num = 0;
  int i = 0;
  while (s[i]) {
    num *= 10;
    num += s[i] - '0';
    i++;
  }
  printf("%d", num * 2);
  return 0;
}
