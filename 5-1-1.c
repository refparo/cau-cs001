#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[10];
  int i = 0;
  scanf("%d %d %d %d %d %d %d %d %d %d",
    &arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
    &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
  int min = arr[0];
  for (i = 1; i < 10; i++)
    if (abs(arr[i]) < abs(min))
      min = arr[i];
  printf("%d", min);
  return 0;
}
