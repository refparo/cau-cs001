#include <stdio.h>

int main() {
	int mat[3][3];
	int i;
	for (i = 0; i < 3; i++)
		scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
	printf("%d", mat[0][0] + mat[0][2] + mat[1][1] + mat[2][0] + mat[2][2]);
	return 0;
}
