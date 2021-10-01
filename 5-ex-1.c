#include <stdio.h>
#include <math.h>

int main() {
	float xs[9];
	scanf("%f %f %f %f %f %f %f %f %f",
		&xs[0], &xs[1], &xs[2], &xs[3], &xs[4],
		&xs[5], &xs[6], &xs[7], &xs[8]);
	float sum = 0, max = xs[0], min = xs[0];
	int i;
	for (i = 0; i < 9; i++) {
		sum += xs[i];
		if (xs[i] > max) max = xs[i];
		if (xs[i] < min) min = xs[i];
	}
	printf("%.2lf", (sum - max - min) / 7);
	return 0;
}
