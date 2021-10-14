#include <stdio.h>

void csort(int arr[], int len) {
  int i, j, min, temp;
  for (i = 0; i < len; i++) {
    min = i;
    for (j = i; j < len; j++)
      if (arr[j] < arr[min]) min = j;
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

int main() {
  int arr[10];
  scanf("%d %d %d %d %d %d %d %d %d %d",
    &arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
    &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
  csort(arr, 10);
  printf("%d %d %d %d %d %d %d %d %d %d",
    arr[0], arr[1], arr[2], arr[3], arr[4],
    arr[5], arr[6], arr[7], arr[8], arr[9]);
  return 0;
}
