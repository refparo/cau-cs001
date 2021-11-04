#include <stdio.h>

#define SIZE 20

void pascals_triangle(int size, int arr[][size]) {
  int i, j;
  for (i = 0; i < size; i++) arr[0][i] = arr[i][0] = 1;
  for (i = 1; i < size; i++)
    for (j = 1; j < size - i; j++)
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
}

int main() {
  int arr[SIZE][SIZE];
  pascals_triangle(SIZE, arr);
  int i, j;
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE - i; j++)
      printf("%5d ", arr[i][j]);
    printf("\n");
  }
  return 0;
}

