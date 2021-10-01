#include <stdio.h>

int main() {
	int a, n;
	scanf("%d", &a);
	scanf("%d", &n);
	int base = 1, sum = 0;
	for (; n > 0; n--) {
		sum += n * a * base;
		base *= 10;
	}
	printf("%d", sum);
	return 0;
}
