#include <stdio.h>

/* Replace backspaces with \b, tabs with \t, and backslashes with \\ */

main() {
	int c;
	while ((c = getchar()) != 'A') {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
		} else if (c == '\\') {
			putchar('\\'); putchar('\\');
		} else if (c == ('\b')) {
			putchar('\\'); putchar('b');
		} else { 
			putchar(c);
		}

	}
}
