#include <stdio.h>

/* we're going to print Fahrenheit-Celcius table
	for fahr = 0, 20, ...300 */
main() { 
	/*
	float fahr = 0.0;
	float cel;	
	while (fahr <= 300) {
		cel = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f%10.2f\n", fahr, cel);
		fahr = fahr + 20;
	}
	*/
	
	#define LOWER 0
	#define UPPER 300
	#define STEP 20
	
	for(int fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%3d%8.1f\n", fahr, ((5.0/9.0) * (fahr - 32.0)));
	}

}
