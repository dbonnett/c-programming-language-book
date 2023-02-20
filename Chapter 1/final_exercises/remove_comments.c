/* removes comments from a c program */
#include <stdio.h>

#define IN 0
#define OUT 1
#define HALF 0
#define NOT_HALF 1
int main() {
	int c;
	int state = OUT;
	int halfState = NOT_HALF;

	while ((c = getchar()) != EOF) {
		if (state == OUT) {
			if (halfState == HALF) {
				if (c == '*') {
					state = IN;
				}
				halfState = NOT_HALF;
			} else if (c == '/') {
				halfState = HALF;
			}
			putchar(c);

		} else { 
			if (halfState == HALF) {
				if (c == '/') {
					state = OUT;
				}
				halfState = NOT_HALF;
			} else if (c == '*') {
				halfState = HALF;
			}
		}
	}
	return 0;
}
