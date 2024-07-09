#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int ispalindrome(char* str) {
	int len = strlen(str);
	char palin[1024];
	int i, j = 0;

	for (i = 0; i < len; i++) {
		if (isalnum(str[i])) {
			palin[j++] = str[i];
		}
	}
	palin[j] = '\0';

	int len_p = strlen(palin);
	for (i = 0; i < len_p; i++) {
		if (isupper(palin[i])) {
			palin[i] = tolower(palin[i]);
		}
	}

	for (i = 0; i < len_p / 2; i++) {
		if (palin[i] != palin[len_p - 1 - i]) return 0;
	}
	return 1;
}

int main5(void) {
	char buffer[1024];

	gets(buffer);
	printf("[%s] is ", buffer);
	if (ispalindrome(buffer)) puts("a palindrome");
	else puts("not a palindrome");

	return 0;
}