#include <stdio.h>

int main() {
  int xs[10];
  scanf("%d %d %d %d %d %d %d %d %d %d",
    &xs[0], &xs[1], &xs[2], &xs[3], &xs[4],
    &xs[5], &xs[6], &xs[7], &xs[8], &xs[9]);
  int max = -0x80000000, snd = -0x80000000;
  int i;
  for (i = 0; i < 10; i++)
    if (xs[i] > max) {
      snd = max;
      max = xs[i];
    } else if (xs[i] < max && xs[i] > snd) {
      snd = xs[i];
    }
  printf("%d %d", max, snd);
  return 0;
}
