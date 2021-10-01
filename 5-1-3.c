#include <stdio.h>

void bsort(int *arr, int len) {
	int i, j;
	int temp;
	for (i = len; i > 0; i--)
		for (j = 0; j < i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main() {
	int arr[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",
		&arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
		&arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);
	bsort(arr, 10);
	printf("%d %d %d %d %d %d %d %d %d %d ",
		arr[0], arr[1], arr[2], arr[3], arr[4],
		arr[5], arr[6], arr[7], arr[8], arr[9]);
	return 0;
}
