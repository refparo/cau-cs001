#include <stdio.h>

int dist(int a, int b) {
  return a >= b ? a - b : b - a;
}

int main() {
  int arr[10];
  int i, j, k = 0, m = 1, d = dist(arr[k], arr[m]);
  for (i = 0; i < 10; i++) scanf("%d", &arr[i]);
  for (i = 0; i < 9; i++)
    for (j = i + 1; j < 10; j++)
      if (dist(arr[i], arr[j]) < d) {
        k = i; m = j;
        d = dist(arr[i], arr[j]);
      }
  printf("%d %d %d", arr[k], arr[m], d);
  return 0;
}
