/* will cast a string of hexadecimal digits into its integer value */
#include <stdio.h>

#define str_len 5

int main() {
	char h[str_len];
	int htoi(char [], int);

	h[0] = 'a';
	h[1] = 'c';
	h[2] = '9';
	h[3] = '4';
	h[4] = '1';
	printf("%d\n", htoi(h, str_len));

	return 0;
}

int htoi(char s[],int length) {
	int i, place, total;

	total = 0;
	place = 1;
	for (i = length - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9')
			total += (s[i] - '0') * place;
		else 
			total += (10 + s[i] - 'a') * place;
		place *= 16;
	}
	return total;
}
