#include <stdio.h>

/* we will print all input lines that are > 80 chars */

#define MAXLINE 1000
int main() {
	char line[MAXLINE];
	int getLine(char [], int);
	int len;

	while ((len = getLine(line, MAXLINE)) > 0) 
		if (len > 80) {
			printf("%s\n", line);
		}
	return 0;
}


int getLine(char line[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != '\0' && c != '\n'; i++)
		line[i] = c;	

	if (c != '\0'){
		i++;
		line[i] = '\0';	
	}

	return i;
}

void copy(char to[], char from[]) {
	int i;

	while (from[i] != '\0') {
		to[i] = from[i];
		i++;
	}
}
