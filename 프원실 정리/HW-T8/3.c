#include <stdio.h>

char* mystrrev(char* str) {
	int temp;
	int len = 0;

	while (str[len] != '\0') { //�����͸� ���ٺ��� �迭�� ������ Ȱ���ϴ� �ɷ��� ������. ��������! ������ ����
		len++;
	}

	for (int i = 0; i < len / 2; i++) { //Ȧ���� ����� �ȹٲ㵵 �Ǵϱ�...!
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