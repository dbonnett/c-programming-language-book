#include <stdio.h>

main() {
	/* first print integer value of EOF */
	printf("%d\n", EOF);	
	
	int c;	
	while ((c = getchar()) != EOF) {
		putchar(c);	
	}
}
