//StudybarCommentBegin
#include <stdio.h>
#include <string.h>

int main() {
  void GetLetters(char s[]);
  char str[100];
  scanf("%s", str);
  GetLetters(str);
  printf("%s", str);
  return 0; 
}
//StudybarCommentEnd

void GetLetters(char str[]) {
  int i;
  int count = 0;
  for (i = 0; str[i] != 0; i++) {
    if (str[i] >= 'a' && str[i] <= 'z'
      || str[i] >= 'A' && str[i] <= 'Z') {
      str[i - count] = str[i];  
    } else {
      count++;
    }
    if (count > 0) str[i] = 0;
  }
}
