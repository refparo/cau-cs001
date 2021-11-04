#include <stdio.h>
#include <math.h>

#define SIZE 0x7f398

void sieve(int arr[], int start, int len) {
  int i, j, max;
  for (i = start; i < len; i++)
    for (arr[i] = arr[i - 1] + 2;; arr[i] += 2) {
      max = sqrt(arr[i]);
      for (j = 1; arr[j] <= max; j++)
        if (arr[i] % arr[j] == 0) break;
      if (arr[j] > max) break;
    }
}

int main() {
  int primes[SIZE];
  primes[0] = 2; primes[1] = 3;
  sieve(primes, 2, SIZE);
  /*
  int i;
  for (i = 0; i < SIZE; i++) {
    printf("%d\n", primes[i]);
  }
  */
  return 0;
}
