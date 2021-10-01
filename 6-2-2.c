#include <stdio.h>

void real_main() {
	int n;
	scanf("%d", n);
	char str[64] = {0};
	int i = 63;
	while (n > 0) {
		str[i] = '0' + (char) (n % 10);
		str[i - 1] = '*';
		n /= 10;
		i -= 2;
	}
	str[i + 1] = 0;
	i = 0;
	while (str[63 - i] != 0) {
		str[i] = str[63 - i];
		i++;
	}
	printf("%s", str);
}

int main() {
	real_main();
	return 0;
}
