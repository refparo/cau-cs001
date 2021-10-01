#include <stdio.h>
#include <math.h>

int main() {
	float m, n;
	scanf("%f %f", &m, &n);
	// h_n = m / (2 ^ n)
	// s = m + 2 * Sigma_{i=1}^(n-1){h_n} = m * (3 - 1 / 2 ^ (n - 2))
	printf("%.2f %.2f",
		m / pow(2, n),
		m * (3 - 1 / pow(2, n - 2)));
	return 0;
}
