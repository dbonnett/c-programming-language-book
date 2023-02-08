#include <stdio.h>

main(){
	/* Header */
	printf("C to F Conversion\n\n");
	
	float celsius = 0;
	float fahr;
	while (celsius <= 300) {
		fahr = 9.0 / 5.0 * celsius + 32.0;
		printf("%3.0f%8.0f\n", celsius, fahr);
		celsius += 20;
	}
}
