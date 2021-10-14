//StudybarCommentBegin
#include <stdio.h>

int main() {
  int palindrome(int x);
  int x, pnum; 
  scanf("%d", &x); 
  pnum = palindrome(x);
  printf("%d", pnum);
  return 0;
}
//StudybarCommentEnd

int palindrome(int num) {
  int src = num;
  int res = 0;
  while (src > 0) {
    res = res * 10 + src % 10;
    src /= 10;
  }
  return res;
}
