#include <stdio.h>

char* max(char* x, char* y) {
  int i;
  char* res = x;
  for (i = 0; x[i] != 0 || y[i] != 0; i++)
    if (x[i] > y[i]) {
      res = x; break;
    } else if (x[i] < y[i]) {
      res = y; break;
    }
  return res;
}

int main() {
  char str1[128], str2[128], str3[128];
  gets(str1); gets(str2); gets(str3);
  printf("%s", max(max(str1, str2), str3));
  return 0;
}
