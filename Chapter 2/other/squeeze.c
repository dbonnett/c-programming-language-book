/* delete charaters in s1 that appear in s2 */
#include <stdio.h>
#define LEN1 16
#define LEN2 11

int main() {
	char s1[] = "hellotherebruva";
	char s2[] = "watermelon";
	void squeeze(char[], char[]);
	return 0;
}

void squeeze(char s[], char t[]) {
	int contains(char[], char);
	for (int i = 0; i < LEN1; i++) {
		if (contains(t, s[i])) {
			for (int j = i+1; i < LEN1-1; j++)
				s[i++] = s[j];
		}
	}
}

int contains(char s[], char c) {
	int i;
	for (i = 0; i < LEN2; i++) 
		if (c == s[i])
			return 1;
	return 0;
}
