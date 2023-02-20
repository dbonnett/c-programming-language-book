/* find ranges of various types */
#include <stdio.h>

int main() {
	int numOfChars();
	int numOfInts();
	printf("num of chars: %d\n", numOfChars());	
	printf("num of ints: %d\n", numOfInts());
}

int numOfInts(void) {
	char i = 0;
	int numOfI = 1;

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
