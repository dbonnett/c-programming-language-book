#include <stdio.h>

#define IN 0
#define OUT 1

main() {
	int c;
	int state = IN;

	while ((c = getchar()) != 'A') {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT; 
		} else if (state == OUT) {
			putchar('\n');
			state = IN;
		}
		putchar(c);
	}	
}
