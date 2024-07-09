#include <stdio.h>

char* mystrrev(char* str) {
	int temp;
	int len = 0;

	while (str[len] != '\0') { //포인터만 쓰다보니 배열을 적절히 활용하는 능력이 떨어짐. 개선하자! 아좌좌 ㅎㅎ
		len++;
	}

	for (int i = 0; i < len / 2; i++) { //홀수면 가운데를 안바꿔도 되니까...!
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	return str;
}

int main3(void) {
	char str[256];

	gets(str);

	printf("%-20s  : After Reverse >>>\n", str);
	printf("%-20s\n", mystrrev(str));

	return 0;
}