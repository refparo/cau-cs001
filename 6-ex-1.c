#include <stdio.h>
#include <math.h>

#define LEN 10

int is_prime(int num) {
  int i;
  int max = floor(sqrt(num));
  if (num == 2) return 1;
  if (num % 2 == 0) return 0;
  for (i = 3; i <= max; i += 2)
    if (num % i == 0) return 0;
  return 1;
}

int filter_prime(int in[], int out[], int len) {
  int i = 0, j = 0;
  for (i = 0; i < len; i++)
    if (is_prime(in[i])) {
      out[j] = in[i];
      j++;
    }
  return j;
}

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

int main() {
  int arr[LEN], res[LEN];
  int i;
  for (i = 0; i < LEN; i++) scanf("%d", &arr[i]);
  int count = filter_prime(arr, res, LEN);
  if (count == 0) printf("No prime");
  else {
    bsort(res, count);
    for (i = 0; i < count; i++) printf("%d ", res[i]);
  }
  return 0;
}
