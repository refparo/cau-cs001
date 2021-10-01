#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int i;
	for (i = 0; num != 1; i++)
		if (num % 2 == 0) num /= 2;
		else num = num * 3 + 1;
	printf("%d", i);
	return 0;
}
