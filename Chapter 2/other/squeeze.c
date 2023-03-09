/* delete charaters in s1 that appear in s2 */
#include <stdio.h>
#define LEN1 16
#define LEN2 11

int main() {
	char s1[] = "abcdefgabcdefga";
	char s2[] = "bbbbccccaa";
	void squeeze(char[], char[]);
	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}

void squeeze(char s[], char t[]) {
	int contains(char[], char);
	for (int i = 0; i < LEN1; i++) {
		if (contains(t, s[i])) {
			for (int j = i; j < LEN1-1; j++)
				s[j] = s[j+1];
			i--;
		}
	}
}

int contains(char s[], char c) {
	int i;
	for (i = 0; i < LEN2 - 1; i++) 
		if (c == s[i])
			return 1;
	return 0;
}
