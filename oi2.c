//StudybarCommentBegin
#include <stdio.h>
#include <string.h>

int CountSubstr(char* s1, char* s2);

int main() {
  char s1[100], s2[100];
  scanf("%s", s1);
  scanf("%s", s2);
  printf("%d", CountSubstr(s1, s2));
}
//StudybarCommentEnd

int CountSubstr(char* str, char* sub) {
  int count = 0;
  int i, j;
  for (i = 0; str[i] != 0; i++) {
    for (j = 0; sub[j] != 0; j++)
      if (sub[j] != str[i + j]) break;
    if (sub[j] == 0) count++;
  }
  return count;
}
