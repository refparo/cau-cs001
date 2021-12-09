#include <stdio.h>

int compare(char* a, char* b) {
  int i = 0;
  while (1) {
    if (a[i] > b[i]) return 1;
    if (a[i] < b[i]) return -1;
    if (a[i] == 0 && b[i] == 0) return 0;
    i++;
  }
}

void swap(char* a, char* b) {
  char tmp;
  int i;
  for (i = 0; a[i] != 0 || b[i] != 0; i++) {
    tmp = a[i];
    a[i] = b[i];
    b[i] = tmp;
  }
}

int main() {
  char a[80] = {0}, b[80] = {0}, c[80] = {0};
  fgets(a, 80, stdin);
  fgets(b, 80, stdin);
  fgets(c, 80, stdin);
  if (compare(b, c) > 0) swap(b, c);
  if (compare(a, b) > 0) swap(a, b);
  if (compare(b, c) > 0) swap(b, c);
  printf("%s\n%s\n%s", a, b, c);
  return 0;
}
