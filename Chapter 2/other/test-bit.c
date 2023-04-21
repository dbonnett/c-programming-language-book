#include <stdio.h>

/* as long as neither x or y is 0, (or false) x && y is true (1) */

int main() {
	int a, b, x, y;
	x = 1;
	y = 2;
	a = x & y;
	b = x && y;
	printf("1 & 2 = %d\n1 && 2 = %d\n", a, b);
	return 0;
}
