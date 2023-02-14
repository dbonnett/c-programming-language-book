#include <stdio.h>

#define FAH 212

main() {
	double fah_to_cel();
	printf("%2.1fC\n", fah_to_cel(FAH));
}

double fah_to_cel(int f) {
	return (5.0/9.0) * (f - 32.0);
}
