#include <stdio.h>

int bin_byte(char* str) {
  int res = 0;
  int i;
  for (i = 0; i < 8; i++) {
    res <<= 1;
    if (str[i] == '1') res += 1;
  }
  return res;
}

int main() {
  char str[33];
  gets(str);
  printf("%d.%d.%d.%d",
    bin_byte(str), bin_byte(str + 8),
    bin_byte(str + 16), bin_byte(str + 24));
}
