#include <stdio.h>

int main() {
  char str[128];
  gets(str);
  int i;
  for (i = 0; str[i] != 0; i++)
    if (str[i] == 'a' || str[i] == 'e'
      || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      putchar(str[i]);
  return 0;
}
