#include <stdio.h>
#include <math.h>

int prime(int x) {
	if (x == 3) return 1;
	int max = sqrt(x);
	int i = 3;
	while (x % i != 0 && i < max) i += 2;
	return x % i != 0;
}

int main() {
	int x;
	scanf("%d", &x);
	if (x < 6 || x % 2 == 1) {
		printf("Input an even num (>=6)");
		return 0;
	}
	int i = 3;
	while (!prime(i) || !prime(x - i)) i += 2;
	printf("%d+%d", i, x - i);
	return 0;
}
