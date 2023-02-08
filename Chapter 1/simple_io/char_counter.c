#include <stdio.h>

main() {
	long count = 0;
	while (getchar() != 'A') {
		count++;
	}
	printf("%ld\n", count);
}
