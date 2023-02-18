#include <stdio.h>

/* Creates histogram displaying frequency of lowercase letters used in input */

main() {
	int lowercase[26];
	int i, c, max;
	max = 0;	
	
	for (i = 0; i < 26; i++)
		lowercase[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			lowercase[c - 'a']++;
			if (lowercase[c - 'a'] > max)
				max = lowercase[c - 'a'];
		}
	}	

	for (i = max; i > 0; i--) {
		for (int j = 0; j < 26; j++) {
			if (lowercase[j] >= i){
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
	char alphabet[26];
	for (i = 0; i < 26; i++) {
		alphabet[i] = 'a' + i;
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", alphabet[i]);
	}
	printf("\n");
}
