#include <stdio.h>

int mystrlen(char* str) {
	int len = 0;
	while (*str != '\0') {
		str++;
		len++;
	}

	return len;
}

char* mystrcpy(char* dest, char* src) {
	char* a = dest;
	while (*src != '\0') {
		*dest++ = *src++;
	}

	*dest = '\0';

	return a;
}

int mystrcmp(char* lhs, char* rhs) {
	while (*lhs != '\0' && *rhs != '\0') {
		if (*lhs != *rhs) {
			if (*lhs < *rhs) return -1; //문자의 아스키 코드 값으로 비교
			else if (*lhs > *rhs) return 1;
		}
		lhs++;
		rhs++;
	}

	if (*lhs == '\0' && *rhs != '\0') return -1;
	else if (*lhs != '\0' && *rhs == '\0') return 1;

	return 0;
}


int main_2(void) {
	char str1[256] = "Hello World !!!\n Good Day !!!";
	char str2[256] = "Hello PNU CSE !!!";
	char str3[256];

	printf("mystrlen(str1) = %d, mystrlen(str2) = %d\n",
		mystrlen(str1), mystrlen(str2));

	printf("mystrcpy(str3,str1) = %s\n", mystrcpy(str3, str1));

	printf("mystrcmp(str1,str3) = %d, mystrcmp(str2,str3) = %d",
		mystrcmp(str1, str3), mystrcmp(str2, str3));

	return 0;
}