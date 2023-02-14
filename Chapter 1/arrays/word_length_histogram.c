/* make a histogram for length of words in input */
#include <stdio.h>

#define IN 0
#define OUT 1
#define MAX_SIZE 15

main() {
	int c;
	int length = 0;
	int state = IN;	

	int word_length[15];
	for (int i = 0; i < 15; i++)
		word_length[i] = 0;

	while ((c = getchar()) != 'A'){
		if (c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
			word_length[length]++;
			length = 0;
		} else {
			state = IN;
			length++;
		}
	}
	/* make sure last word gets added */
	word_length[length]++; 	
	
	printf("Number of times words of various lengths displayed:\n");
	for (int i = 1; i < 15; i++) 
		printf("%2d: %3d\n", i, word_length[i]);
}
