#include <stdio.h>

int main() {
  char str[128];
  int i = 0;
  for (i = 0; (i == 0) || (str[i - 1] != ';'); i++)
    str[i] = getchar();
  for (i = 0; str[i] != ';'; i++)
    putchar((str[i] - 'a' + 1 + 3) % 26 + 'a' - 1);
  return 0;
}
