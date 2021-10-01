#include <stdio.h>

int add(int x, int y) {
	int z = x + y;
	return z;
}

int main() {
	int a, b, sum;
	a = 10;
	b = 24;
	sum = add(a, b);
	printf("sum is %d", sum);
	return 0;
}
