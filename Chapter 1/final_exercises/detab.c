/* replace all tabs with n spaces */
#include <stdio.h>
#define n 5

int main() {
	int c, i;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			for (i = 0; i < n; i++)
				putchar(' ');
		} else {
			putchar(c);
		}
	}
}
