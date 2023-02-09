#include <stdio.h>

/* count# of words, strings without blanks, tabs, or nls */

main () {
	#define IN 1
	#define OUT 0
	int c, nl, nw, nc, state;

	nl = nw = nc = 0;
	state = OUT;

	while ((c = getchar()) != 'A') {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT) {
			nw++;
			state = IN;
		}
	}
	printf("# of words = ");
	printf("%d\n", nw);
}
