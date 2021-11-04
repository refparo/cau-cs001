//StudybarCommentBegin
#include <stdio.h>
#include <string.h>

int main() {
  void copystr(char *, char *, int);
  int m;
  char str1[20], str2[20];
  scanf("%s", str1);
  scanf("%d", &m);
  if (strlen(str1) < m) printf("input error!");
  else {
      copystr(str1, str2, m);
    printf("%s", str2);
  }
  return 0;
}
//StudybarCommentEnd

void copystr(char* src, char* dest, int start) {
  int i;
  for (i = 0; src[i + start - 1] != 0; i++)
    dest[i] = src[i + start - 1];
  dest[i] = 0;
}
