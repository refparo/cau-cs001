//StudybarCommentBegin
#include <stdio.h>

int main() {
  void pascals_triangle(int n);
  int n; 
  scanf("%d", &n);
  pascals_triangle(n);
  return 0;
}
//StudybarCommentEnd

#define LEN 10

void pascals_triangle(int n) {
  int arr[LEN][LEN];
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < i + 1; j++) {
      if (j == 0 || j == i) arr[i - j][j] = 1;
      else arr[i - j][j] = arr[i - j - 1][j] + arr[i - j][j - 1];
      printf("% 5d", arr[i - j][j]);
    }
    printf("\n");
  }
}
