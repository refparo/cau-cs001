#include <stdio.h>
#include <math.h>

int main() {
	int num;
	scanf("%d", &num);
	int i; int max = floor(sqrt(num));
	for (i = 2; i <= max; i++)
		if (num % i == 0) {
			printf("n");
			return 0;
		}
	printf("y");
	return 0;
}
