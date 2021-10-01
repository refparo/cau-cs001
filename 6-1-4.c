#include <stdio.h>

int same_digit(int n) {
	return n % 100 / 10 == n % 10;
}

int main() {
	int i;
	for (i = 10; i < 100; i++)
		if (same_digit(i)) printf("%d\n", i);
	return 0;
}
