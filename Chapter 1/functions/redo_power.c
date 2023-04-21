#include <stdio.h>

int main() {
	int base = 5;
	int exp = 4;
	int power(int a,int x);
	printf("%d ^ %d = %d\n", base, exp, power(base, exp));
	return 0;
}

int power(int a, int x) {
	int base = a;
	while(x > 1) {
		a *= base;
		x--;
	}
	return a;
}
