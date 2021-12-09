#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void exchange(int* a, int* b, int* c) {
  if (*b < *c) swap(b, c);
  if (*a < *b) swap(a, b);
  if (*b < *c) swap(b, c);
}

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  exchange(&a, &b, &c);
  printf("%d %d %d", a, b, c);
  return 0;
}
