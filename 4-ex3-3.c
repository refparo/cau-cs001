#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	// x + y = n => 2x + 2y = 2n
	// 2x + 4y = m
	// =>
	// y = m/2 - n
	// x = 2n - m/2;
	printf("%d %d", 2 * n - m / 2, m / 2 - n);
	return 0;
}
