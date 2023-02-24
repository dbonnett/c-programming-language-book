/* checks for balanced {,[,",',( symbols"
 * ASCII values:
 * 	(: 40, ): 41
 * 	{: 123 }: 125
 * 	[: 91, ]: 93
 * 	": 34, ': 39
 */

#include <stdio.h>
#define MAX_LEN 100

char queue[MAX_LEN];
int ind = 0;

int main() {
	int c;
	char pop();
	void push(char);

	while ((c = getchar()) != EOF) {
		if (c == 40 || c == 123 || c == 91)
			push(c);
		printf("%c", pop());
	}
}

char pop() {
	if (ind > 0) {
		ind--;
		return queue[ind + 1];
	}
	return '\0';
}

void push(char c) {
	queue[ind] = c;
}
