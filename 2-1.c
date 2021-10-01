#include <stdio.h>

int main() {
	double f, c;
	scanf("%lf", &f);
	c = (f - 32) * 5 / 9;
	printf("c=%.2lf", c);
	return 0;
}
