#include <stdio.h>

int main() {
	int x, y;
	printf("Base: ");
	scanf("%d", &x);
	printf("Power: ");
	scanf("%d", &y);
	long power(int a, int b);
	printf("%d ^ %d = %ld\n", x, y, power(x,y));
	return 0;
}

long power(int a, int b) {
	long aHold = a;
	while (b > 1) {
		aHold *= a;
		b--;
	}
	return aHold;
}
