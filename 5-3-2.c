#include <stdio.h>

int main() {
  char s[40], t[20];
  scanf("%s", s);
  scanf("%s", t);
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
