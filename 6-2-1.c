#include <stdio.h>

int lucky(int x, int y) {
	int z = x % 10 * 10 + y % 10;
	return x % z == 0 || y % z == 0;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	if (lucky(x, y)) printf("Lucky!");
	else printf("No!");
	return 0;
}
