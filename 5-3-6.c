#include <stdio.h>

int main() {
  char str[128];
  gets(str);
  char search = getchar();
  int i = 0;
  while (str[i] != 0 && str[i] != search) i++;
  if (str[i] == 0) i = -2;
  printf("Position is : %d", i + 1);
  return 0;
}
