#include <stdio.h>

main() {
	int c, nl, nb, nt;

	nl = 1;
	nb = 0;
	nt = 0;
	while ((c = getchar()) != 'A') { 
		if (c == '\n'){ 
			nl++;
		} 
		if (c == '\t') {
			nt++;
		}
		if (c == ' ') {
			nb++;
		}
	
	}
	printf("# of Lines: ");
	printf("%d\n", nl);
	printf("# of Tabs: ");
	printf("%d\n", nt);
	printf("# of blanks: ");
	printf("%d\n", nb);
}
