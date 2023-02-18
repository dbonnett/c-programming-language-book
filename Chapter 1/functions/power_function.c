#include <stdio.h>

main() {
	int base, n;
	int power(int m, int n);
	base = 2;
	n = 5;
	printf("%d to the power of %d = %d\n", base, n, power(base, n));
}

int power(int base, int n) {
	/* result will store each iteration of multiplication 
	 * to be returned when done */
	int result = 1;
	
	/* the while loop will run n times, each time 
	 * multiplying another base to the result */
	while (n > 0) {
		result *= base;
		n--;
	}	
	return result;
}
