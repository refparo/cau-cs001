//StudybarCommentBegin
#include <stdio.h>
int main() {
  void in_num(int* x);
  void exchange(int* x);
  void out_num(int* x);
  int x[10];
  in_num(x);
  exchange(x);
  out_num(x);
  return 0;
}
//StudybarCommentEnd

void in_num(int* arr) {
  int i;
  for (i = 0; i < 10; i++)
    scanf("%d", &arr[i]);
}

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void exchange(int* arr) {
  int max = 0;
  int min = 0;
  int i;
  for (i = 1; i < 10; i++) {
    if (arr[i] > arr[max]) max = i;
    if (arr[i] < arr[min]) min = i;
  }
  swap(&arr[min], &arr[0]);
  swap(&arr[max], &arr[9]);
}

void out_num(int* arr) {
  int i;
  printf("%d", arr[0]);
  for (i = 1; i < 10; i++)
    printf(" %d", arr[i]);
}

