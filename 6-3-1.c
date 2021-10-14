#include <stdio.h>

void Sort(int arr[], int len) {
  int i, j;
  int temp;
  for (i = 0; i < len; i++)
    for (j = len - 1; j > 0; j--)
      if (arr[j] < arr[j - 1]) {
        temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
      }
}

//StudybarCommentBegin
int main() {
  int a[10], i;
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  Sort(a, 10);
  for (i = 0; i < 10; i++)
    printf("%d ", a[i]);
  return 0;
}
//StudybarCommentEnd
