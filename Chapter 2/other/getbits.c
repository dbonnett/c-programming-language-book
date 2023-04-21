#include <stdio.h>

/* get 'n' bits starting at postion 'p' from unsigned int 'x' */

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) && ~(~0 << n);
}

int main() {
	unsigned getbits(unsigned, int, int);
	unsigned num = 177;
	printf("%u\n", num);
	printf("%u\n", getbits(177, 4, 3));
}
