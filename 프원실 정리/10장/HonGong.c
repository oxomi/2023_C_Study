int nvLS[10] = {1,234,567,890,1123}


while (fgets(buf, sizeof(buf), fpcsv)) {
	int num = 0;
	for (int i = 0; buf[i]; i++) {
		if (buf[i] = ',' || buf[i] = '\n') {
			printf("%d", num);
			num = 0;
		}
		else {
			num = num * 10 + (buf[i] - '0'); // csv������ text file �̶� ����� ���ڿ��� ���ڷ� �ٲ���� ��.
		}
	}
}
	

------------------------------------

//�ٴ��� �����
File* fp = NULL;
char buf[256];

fp = fopen("myfile1.txt", "w");

//���� �Է��Ѱ� ���Ͽ� ���
while (gets(buf) != NULL) {
	fputs(buf, fp);
}

fclose(fp);


//���Ͽ��� �о�� ���ۿ� ���

fp = fopen("myfile1.txt", "r");

while (fgets(buf, sizeof(buf), fp) != NULL) {
	puts(buf);
}

fclose(fp);

----------------------------------

//���ڴ��� �����
FILE* fp = NULL;
int ch;


//���ۿ��� �о�� ���Ͽ� ���
fp = fopen("myfile2.txt", "w");

while ((ch = getchar()) != EOF) {  //ch = getchar() ���� ����ϱ�
	//fputc(ch)
	fputc(ch, fp);
}

fclose(fp);


//���Ͽ��� �о�� ���ۿ� ���
fp = fopen("myfile.txt", "r");

while ((ch = fgetc(fp) != EOF) { //ch = fgetc(fp) ���� ����ϱ�
	//putchar(ch)
	putchar(ch);
}




//automatic variable �� stack


//������� 
#include <stdio.h>
void foo(int s) {
	printf("The sum is %d\n", s);
}
int* get_sum(int na[], int nsize) {
	int* sum = malloc(sizeof(na)); //������ ����� �����Ͽ� �����Ҵ��� ���ָ� �����ƽ ������ ���̳��� ������ �ٲ�鼭 �Լ��� ���� �� ���ÿ��� �޸𸮰� �������� ���� �����Ƿ� ���� �ذ�.
	int i;
	*sum = 0;
	for (i = 0; i < nsize; i++)
		*sum = *sum + na[i]; //�̰͵� �ٲ����
	return sum;
}
int main(void)
{
	int nums[7] = { 11,23,45,83,231,56,49 };
	int* psum;
	psum = get_sum(nums, 7);
	foo(*psum);

	free(*psum) //�������� �Ҵ�� �޸� ����
	return 0;
}