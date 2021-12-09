#include <stdio.h>

int main() {
  int arr[10];
  int* p;
  for (p = arr; p < arr + 10; p++)
    scanf("%d", p);
  for (p = arr; p < arr + 10; p++)
    printf("%d ", *p);
  return 0;
}
