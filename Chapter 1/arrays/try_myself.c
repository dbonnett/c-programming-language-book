#include <stdio.h>

main() {
	int c;
	int ndigits[10];
	for (int i = 0; i < 10; i++)
		ndigits[i] = 0;
	
	while ((c = getchar()) != 'A')
		if (c >= '0' && c <= '9')
			ndigits[c - '0']++;

	for (int i = 0; i < 10; i++) { 
		printf("Number of %ds: %d", i, ndigits[i]);
		printf("\n");
	}
}
