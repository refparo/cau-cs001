#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double p = (a + b + c) / 2;
	printf("%.2lf", p * (p - a) * (p - b) * (p - c));
	return 0;
}
