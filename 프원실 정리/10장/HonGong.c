int nvLS[10] = {1,234,567,890,1123}


while (fgets(buf, sizeof(buf), fpcsv)) {
	int num = 0;
	for (int i = 0; buf[i]; i++) {
		if (buf[i] = ',' || buf[i] = '\n') {
			printf("%d", num);
			num = 0;
		}
		else {
			num = num * 10 + (buf[i] - '0'); // csv파일은 text file 이라서 저장된 문자열을 숫자로 바꿔줘야 함.
		}
	}
}
	

------------------------------------

//줄단위 입출력
File* fp = NULL;
char buf[256];

fp = fopen("myfile1.txt", "w");

//내가 입력한걸 파일에 출력
while (gets(buf) != NULL) {
	fputs(buf, fp);
}

fclose(fp);


//파일에서 읽어와 버퍼에 출력

fp = fopen("myfile1.txt", "r");

while (fgets(buf, sizeof(buf), fp) != NULL) {
	puts(buf);
}

fclose(fp);

----------------------------------

//문자단위 입출력
FILE* fp = NULL;
int ch;


//버퍼에서 읽어와 파일에 출력
fp = fopen("myfile2.txt", "w");

while ((ch = getchar()) != EOF) {  //ch = getchar() 형태 기억하기
	//fputc(ch)
	fputc(ch, fp);
}

fclose(fp);


//파일에서 읽어와 버퍼에 출력
fp = fopen("myfile.txt", "r");

while ((ch = fgetc(fp) != EOF) { //ch = fgetc(fp) 형태 기억하기
	//putchar(ch)
	putchar(ch);
}




//automatic variable 과 stack


//수정방안 
#include <stdio.h>
void foo(int s) {
	printf("The sum is %d\n", s);
}
int* get_sum(int na[], int nsize) {
	int* sum = malloc(sizeof(na)); //포인터 편수로 선언하여 동적할당을 해주면 오토매틱 변수가 다이나믹 변수로 바뀌면서 함수가 끝날 때 스택에서 메모리가 지워지는 일이 없으므로 오류 해결.
	int i;
	*sum = 0;
	for (i = 0; i < nsize; i++)
		*sum = *sum + na[i]; //이것도 바꿔야함
	return sum;
}
int main(void)
{
	int nums[7] = { 11,23,45,83,231,56,49 };
	int* psum;
	psum = get_sum(nums, 7);
	foo(*psum);

	free(*psum) //동적으로 할당된 메모리 해제
	return 0;
}