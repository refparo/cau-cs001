#include <stdio.h>

int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};

int is_leap(int y) {
	return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0; 
}

void print_prev(int y, int m, int d) {
	if (d == 1)
		if (m == 1) printf("%4d 12 31\n", y - 1);
		else if (m == 3) printf("%4d  2 %2d\n", y, 28 + is_leap(y));
		else printf("%4d %2d %2d\n", y, m - 1, months[m - 2]);
	else printf("%4d %2d %2d\n", y, m, d - 1);
}

void print_next(int y, int m, int d) {
	if (m == 12 && d == 31) printf("%4d  1  1\n", y + 1);
	else if (d == (m != 2 ? months[m - 1] : is_leap(y) ? 29 : 28))
		printf("%4d %2d  1\n", y, m + 1);
	else printf("%4d %2d %2d\n", y, m, d + 1);
}

int main() {
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);
	print_prev(y, m, d);
	print_next(y, m, d);
	return 0;
}
