#include <stdio.h>

main() {
	int base, n;
	int power(int m, int n);
	base = 2;
	n = 5;
	printf("%d to the power of %d = %d\n", base, n, power(base, n));
}

int power(int base, int n) {
	int i, p;

	p = 1;
	for (i = 1; i <= n; i++) {
		p = p * base;
	}
	return p;
}

