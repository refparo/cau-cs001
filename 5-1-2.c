#include <stdio.h>

int main() {
	int arr[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",
		&arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
		&arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	float avg = 0.0;
	int i;
	for (i = 0; i < 10; i++)
		avg += arr[i];
	avg /= 10;
	int count = 0;
	for (i = 0; i < 10; i++)
		if (arr[i] > avg)
			count++;
	printf("%d", count);
	return 0;
}
