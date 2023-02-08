#include <stdio.h>

/* Goal here is to take keyboard input, return as output
	replacing string of multiple blanks with a single blank */

main() {
	int c;
	int prev = 0;
	while ((c = getchar()) != 'A') {
		if (c != ' ') {
			putchar(c);
		} else if (prev != ' ') {
			putchar(c);
		}

	prev = c;
	}
}
