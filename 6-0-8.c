#include <stdio.h>

double avg(int arr[], int len) {
	double sum = 0;
	int i;
	for (i = 0; i < len; i++)
		sum += arr[i];
	return sum / len;
}

int min(int arr[], int len) {
	int min = arr[0];
	int i;
	for (i = 0; i < len; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}

int max(int arr[], int len) {
	int max = arr[0];
	int i;
	for (i = 0; i < len; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}

int main() {
	int arr[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",
		&arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
		&arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	printf("%lf,%d,%d",
		avg(arr, 10), min(arr, 10), max(arr, 10));
	return 0;
}
