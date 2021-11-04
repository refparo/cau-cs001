#include <stdio.h>
#include <math.h>

int prime(int num) {
  int i; int max = sqrt((float) num);
  for (i = 2; i <= max; i++)
    if (num % i == 0) {
      return 0;
    }
  return 1;
}

//StudybarCommentBegin
int main()
{
  int num;
  scanf("%d", &num);
  if (prime(num)) printf("yes");
  else printf("no");
  return 0;
}
//StudybarCommentEnd
