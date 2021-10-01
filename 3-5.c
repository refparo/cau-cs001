#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		if (b == 0)
			printf("Not an equation");
		else
			printf("%.2f", -c / b);
		return 0;
	}
	float delta = b * b - 4 * a * c;
	float y = sqrt(fabs(delta));
	if (delta >= 0) {
		float x1 = (-b + y) / (2 * a);
		float x2 = (-b - y) / (2 * a);
		if (x1 < x2) {
			float temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("%.2f %.2f", x1, x2);
	} else {
		float x = -b / (2 * a);
		y = y / (2 * fabs(a));
		printf("%.2f+%.2fi %.2f-%.2fi", x, y, x, y);
	}
	return 0;
}
