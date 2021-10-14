#include <stdio.h>

#define LEN 256

int reverse(char* in, char* out, int len) {
  int i = 0;
  out[len - 1] = 0;
  while (in[i] != 0) {
    out[len - i - 2] = in[i];
    i++;
  }
  return len - i - 1;
}

int main() {
  char str[LEN] = {0}, res[LEN] = {0};
  scanf("%s", str);
  int pos = reverse(str, res, LEN);
  printf("%s", res + pos);
  return 0;
}
