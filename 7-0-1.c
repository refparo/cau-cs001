#include <stdio.h>
#include <stdlib.h>

int main() {
  int *a = (int*) malloc(sizeof(int)), *b = (int*) malloc(sizeof(int));
  scanf("%d %d", a, b);
  if (*a < *b) {
    int* tmp = a;
    a = b;
    b = tmp;
  }
  printf("%d %d", *a, *b);
  return 0;
}
