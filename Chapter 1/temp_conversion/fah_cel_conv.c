#include <stdio.h>

/* we're going to print Fahrenheit-Celcius table
	for fahr = 0, 20, ...300 */
main() { 
	/* the book way vv

	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	
	now my way */

	int fahr = 0;
	int cel;	
	while (fahr <= 300) {
	
	cel = 5 * (fahr - 32) / 9;
	printf("%d\t%d\n", fahr, cel);
	fahr = fahr + 20;
	}


}
