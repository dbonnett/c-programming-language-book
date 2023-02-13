#include <stdio.h>

/* count number of each digit */

main() {
	int c, i;

	int digits[10];
	for(i = 0; i < 10; i++)
		digits[i] = 0;
	while((c = getchar()) != 'A') {
		if (c >= '0' && c <= '9'){
			digits[c - '0']++;
		}
	}
	
	for(i = 0; i < 10; i++) 
		printf("Num of %ds: %3.1d\n", i, digits[i]);
}
