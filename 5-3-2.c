#include <stdio.h>

int main() {
  char s[40], t[20];
  gets(s); gets(t);
  int i = 0;
  while (s[i]) i++;
  int j = 0;
  while (t[j]) {
    s[i] = t[j];
    i++; j++;
  }
  s[i] = 0;
  printf("%s", s);
  return 0;
}
