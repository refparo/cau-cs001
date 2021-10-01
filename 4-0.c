#include <stdio.h>

int main() {
	int i = 1;
	double sum = 0;
	while (i <= 100) {
		sum += 1.0 / i;
		i++;
	}
	printf("%lf", sum);
	return 0;
}

