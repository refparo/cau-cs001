#include <stdio.h>

#define LEN 256

void filter_vowel(char* in, char* out) {
  int i = 0, j = 0;
  while (in[i] != 0) {
    if (in[i] == 'a' || in[i] == 'e' || in[i] == 'i'
      || in[i] == 'o' || in[i] == 'u') {
        out[j] = in[i];
        j++;
      }
    i++;
  }
}

int main() {
  char str[LEN] = {0}, res[LEN] = {0};
  scanf("%s", str);
  filter_vowel(str, res);
  printf("%s", res);
  return 0;
}
