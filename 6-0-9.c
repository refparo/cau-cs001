#include <stdio.h>

double avg(int len, int arr[]) {
  int i;
  double sum = 0;
  for (i = 0; i < len; i++)
    sum += arr[i];
  return sum / len;
}

int max(int len, int arr[]) {
  int i;
  int m = arr[0];
  for (i = 1; i < len; i++)
    if (m < arr[i]) m = arr[i];
  return m;
}

int main() {
  int arr[10];
  int i;
  for (i = 0; i < 10; i++) scanf("%d", &arr[i]);
  double a = avg(10, arr);
  int count = 0;
  for (i = 0; i < 10; i++)
    if (arr[i] > a) count++;
  printf("%d\n%d", count, max(10, arr));
  return 0;
}
