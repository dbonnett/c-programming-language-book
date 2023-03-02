/* find ranges of various types */
#include <stdio.h>

int main() {
	int numOfChars();
	long int numOfInts();
	int numOfShorts();
	printf("num of chars: %d\n", numOfChars());
	printf("num of ints: %ld\n", numOfInts());
	printf("num of shorts: %d\n", numOfShorts());
}

long int numOfInts(void) {
	int i = 0;
	long int numOfI = 1;

	while (++i != 0)
		numOfI++;

	return numOfI;
}

int numOfChars(void) {
	char i = 'a';
	int numOfI = 1;

	while (++i != 'a')
		numOfI++;

	return numOfI;
}

int numOfShorts() {	
	short i = 0;
	int numOfI = 1;

	while (++i != 0) 
		numOfI++;

	return numOfI;
}
