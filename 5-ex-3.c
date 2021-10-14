#include <stdio.h>

int main() {
  char str[128];
  gets(str);
  int in_word = str[0] != ' ';
  int count = 0;
  int i;
  for (i = 0; str[i] != 0; i++)
    if (str[i] == ' ' && in_word) {
      in_word = !in_word;
      count++;
    } else if (str[i] != ' ' && !in_word) {
      in_word = !in_word;
    }
  if (str[i - 1] != ' ') count++;
  printf("%d", count);
  return 0;
}
