//파일 1을 파일 2 로 카피하기 ver.1
#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE* fp1, fp2;
	char ch;

	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("filw2.txt", "w");


	while ((ch = fgetc(fp1) != EOF)) {
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
}


//ver.2

int main(int argc, char* argv[]) {
	FILE* fp1, fp2;
	char ch;

	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("filw2.txt", "w");

	while ((ch = fgetc(fp1)) != EOF) {
		fputc(ch,fp2);
	}

	fclose(fp1);
	fclose(fp2);

}



//적금계산 프로그램

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEF_RATE 1.8 // default rate (%)
#define DEF_TERM 1 // default term (yr)

int inter_calc(int dep, double rate, int yrs) {
	int tot_inter;

	int rate2 = 1 + rate;
	
	tot_inter = dep*(pow(rate2, yrs) - 1);

	return tot_inter;
}

int main(int argc, char* argv[]) {
	int deposit;
	double rate = DEF_RATE / 100;
	int term = DEF_TERM;

	if (argc < 2) {
		printf("Usage : ");
		exit(1);
	}

	deposit = atoi(argv[1]);  //atoi 까먹지 말기

	printf("Total Interest = KRW %d\n",
		inter_calc(deposit, rate, term));
	return 0;

}

