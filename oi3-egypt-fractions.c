#include <stdio.h>

// a/b - 1/c
void minus(int* a, int* b, int c) {
  *a = *a * c - *b;
  *b = *b * c;
}

int main() {
  int a, b;
  scanf("%d/%d", &a, &b);
  int arr[32] = {0};
  int len = 0;
  int i;
  while (a > b) {
    arr[len] = 1;
    len++;
    a -= b;
  }
  for (i = 2; b % a != 0; i++)
    if ((double) b / a < i) {
      arr[len] = i;
      len++;
      a = a * i - b;
      b = b * i;
    }
  arr[len] = b / a;
  len++;
  printf("1/%d", arr[0]);
  for (i = 1; i < len; i++)
    printf("+1/%d", arr[i]);
  return 0;
}
