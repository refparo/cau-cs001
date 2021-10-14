#include <stdio.h>

void bsort(int arr[], int len) {
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

int rearrange_diff(int num) {
  int arr[] = {num % 10, num / 10 % 10, num / 100};
  bsort(arr, 3);
  //return (100 * arr[2] + 10 * arr[1] + arr[0]) - (100 * arr[0] + 10 * arr[1] + arr[2]);
  return 99 * (arr[2] - arr[0]);
}

int main() {
  int num = -1;
    int temp;
    scanf("%d", &temp);
    do {
      num = temp;
       temp = rearrange_diff(num);
    } while (num != temp);
    printf("%d", num);
    return 0; 
}
