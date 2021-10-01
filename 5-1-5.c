#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int digits[8];
	int i;
	for (i = 0; i < 8; i++) {
		digits[i] = num % 2;
		num /= 2;
	}
	for (i = 7; i >= 0; i--)
		printf("%d", digits[i]);
	return 0;
}
