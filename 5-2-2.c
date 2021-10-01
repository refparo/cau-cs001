#include <stdio.h>

int main() {
  int mat[3 * 4];
  int i;
  for (i = 0; i < 3; i++)
    scanf("%d %d %d %d", &mat[i * 4 + 0], &mat[i * 4 + 1], &mat[i * 4 + 2], &mat[i * 4 + 3]);
  i = 0;
  while (mat[i] >= 0) i++;
  printf("%d %d %d", i / 4 + 1, i % 4 + 1, mat[i]);
  return 0;
}
