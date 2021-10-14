#include <stdio.h>

#define LEN 5

void insert(int arr[], int len, int num) {
  int order = (arr[0] < arr[1]) - 1;
  int i = 0;
  while ((arr[i] < num) + order) i++;
  int temp1 = num, temp2;
  while (i < len) {
    temp2 = arr[i];
    arr[i] = temp1;
    temp1 = temp2;
    i++;
  }
}

int main() {
  int arr[LEN], i;
  for (i = 0; i < LEN; i++)
    scanf("%d", &arr[i]);
  insert(arr, LEN, arr[LEN - 1]);
  for (i = 0; i < LEN; i++)
    printf("%d ", arr[i]);
  return 0;
}
