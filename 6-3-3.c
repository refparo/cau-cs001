#include <stdio.h>

int btoi(char* bin) {
  int res = 0;
  int i = 0;
  while (bin[i] != 0) {
    res <<= 1;
    if (bin[i] == '1') res++;
    i++;
  }
  return res;
}

int main() {
  char str[32] = {0};
  scanf("%s", str);
  printf("%d", btoi(str));
  return 0;
}
