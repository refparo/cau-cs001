#include <stdio.h>

#define SIZE 10

void qsort(int arr[], int len) {
  if (len < 2) return;
  int pivot = arr[0], temp;
  int left = -1, right = len;
  while (1) {
    do left++; while (arr[left] < pivot);
    do right--; while (arr[right] > pivot);
    if (left >= right) break;
    temp = arr[left]; arr[left] = arr[right]; arr[right] = temp;
  }
  qsort(arr, right + 1);
  qsort(arr + right + 1, len - right - 1);
}

int main() {
  int arr[SIZE];
  int i;
  for (i = 0; i < SIZE; i++) scanf("%d", &arr[i]);
  qsort(arr, SIZE);
  for (i = 0; i < SIZE; i++) printf("%d ", arr[i]);
  return 0;
}
