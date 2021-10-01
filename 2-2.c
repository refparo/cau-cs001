#include <stdio.h>

#define PI 3.141592657

int main() {
	double rho = 11340.0;
	double r = 9.8 / 100 / 2;
	double m = rho * PI * r * r * r * 4 / 3;
	printf("%.6lf", m);
	return 0;
}

