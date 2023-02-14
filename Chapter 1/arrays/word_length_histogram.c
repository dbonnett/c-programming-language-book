/* make a histogram for length of words in input */
#include <stdio.h>

#define MAX_SIZE 15

main() {
	int c;
	int length = 0;	
	int max = 0;	

	int word_length[MAX_SIZE];
	for (int i = 0; i < MAX_SIZE; i++)
		word_length[i] = 0;

	while ((c = getchar()) != 'A'){
		if (c == ' ' || c == '\n' || c == '\t'){
			word_length[length]++;
			if (word_length[length] > max)
				max = word_length[length];
			length = 0;
		} else {
			length++;
		}
	}
	/* make sure last word gets added */
	word_length[length]++; 	
	if (word_length[length] > max) 
		max = word_length[length];

	for (int i = max; i > 0; i--){
		for (int j = 1; j < MAX_SIZE; j++){
			if (word_length[j] >= i){
				printf("*");
			} else {
				printf(" ");
			}
			printf("  ");
		}
		printf("\n");
	}
	printf("%d", 1);
	for (int i = 2; i < MAX_SIZE; i++) {
		printf("%3d", i);
	}
	printf("\n");
	
	/* code block below replaced with histogram function	
	printf("Number of times words of various lengths displayed:\n");
	for (int i = 1; i < 15; i++) 
		printf("%2d: %3d\n", i, word_length[i]);
	*/
}
