//�ڱ��
#include <stdio.h>
#define MAX_NUMBER 10000

int not_selfnum(int n) {

	int sum = n;
	if (n / 10 == 0) {
		return n + n;
	}
	else {
		while (1) {
			if (n == 0) {
				return sum;
				break;
			}
			sum += n % 10;
			n /= 10;

		}
	}
}

int main(void) {
	int arr[MAX_NUMBER] = { 0, };
	for (int i = 1; i < MAX_NUMBER; i++) {
		int result = not_selfnum(i);
		if (result < 10000) {
			arr[result] = 1;
		}
	}

	for (int j = 1; j < MAX_NUMBER; j++) {
		if (arr[j] == 0) {
			printf("%d", j);
		}
	}

	return 0;
}



//monte_pi
if (n <= 0) n = N_MAX;
for (i = 0; i < n; i = i + 1) {

	x = (double)rand() / (RAND_MAX + 1);
	y = (double)rand() / (RAND_MAX + 1);

	if (0 <= x * x + y * y && x * x + y * y <= 1) num_in++;
	else num_out++;

}
monte_pi = (4.0 * num_in) / n; //[ monte_pi ���� �����϶�. ]





//pnucse bubble sort
STUD pnucse[] = { {1, "Choi", 9.9}, {2, "Park", 0.1},
	  {3, "Kim", 5.0 }, {4, "Lee", 3.0 }, {5, "Moon", 9.5 },
	  {6, "Kang", 7.0 }, {7, "Jeon", 0.9 }, {-1, NULL, 0 } };


void stud_bubble_sort(STUD* pnucse) {

	int len = 7;
	STUD temp;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (pnucse[j].points < pnucse[j + 1].points) {
				temp = pnucse[j];
				pnucse[j] = pnucse[j + 1];
				pnucse[j + 1] = temp;
			}
		}
	}
	return;


//csv1 ��
#include <stdio.h>
int main(void)
{
	int i; // index
	int num = 0, sum = 0; // number
	char str[] = "123,456,789";
	for (i = 0; str[i]; i++) {
		if (str[i] == ',') { // new number
			sum += num;
			num = 0;
		}
		else { // a digit
			num = num * 10 + (str[i] - '0'); //else �����ָ� Ʋ��
		}
	}
	sum += num; //����

	printf("Sum of all values in ");
	printf(" CSV[%s] : %d", str, sum);
	return 0;
}




//csv2 �и�
int nvLS[10] = { 1,234,567,890,1123 };


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




//strtok!!!
#include <stdio.h>

// psave : ���� �Լ� ��� ���� ��ġ
// pnt : �̹� �Լ� ��� ���� ��ġ
char* mystrtok1(char* str, char delim) {
	static char* psave = 0;
	char* pnt = 0;

	if (str)
		psave = str;

	if (psave) {
		str = psave;

		while (*str == delim) // ,,,,�� ��� �پ�ѱ� ���ؼ�
			str++;

		if (*str) {
			pnt = str++; // �̹��� ��µǴ� ��ġ �Ѱ��ְ�, ++

			while (*str && *str != delim) // , ���� ������ ++
				str++;

			if (*str) {
				psave = str + 1; // ���������� �Ѿ�� psave �� ( = , ���� ��ġ)
				*str = '\0'; // ,�� \0���� �ٲ��ֱ�
			}
			else
				psave = 0;
		}
	}
	return pnt;
}

int main(void) {
	char* pstr, * ptoken, delim;
	int test = 0;

	char test_str[256] = { ",123,hello,34 56, Good.,Bye" };

	scanf("%d", &test);
	if (test > 2 || test < 0) test = 0;
	delim = test_str[test][0];
	pstr = test_str[test] + 1;

	ptoken = mystrtok1(pstr, delim);

	while (ptoken) {
		printf("%s\n", ptoken);
		ptoken = mystrtok1(0, delim);
	}

	return 0;
}




//term deposit
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DEF_RATE 1.8 // default rate (%)
#define DEF_TERM 1 // default term (yr)

int inter_calc(int dep, double rate, int yrs) {
	
	int tot_inter;

	tot_inter = dep* (pow((1 + rate), yrs) - 1);

	return tot_inter;
}

int main(int argc, char* argv[]) {
	int deposit;
	double rate = DEF_RATE / 100;
	int term = DEF_TERM;

	if (argc == 1) {
		printf("Usage: bankint <deposit_money> <interest_rate(%)> <term(year(s))>\n");
		printf("Default interest = 1.8%, Default term = 1 year");
	}

	else {
		if (argc >= 2)
			deposit = atoi(argv[1]);
		if (argc >= 3)
			rate = atof(argv[2]) / 100;
		if (argc == 4)
			term = atoi(argv[3]);
		printf("Total Interest = KRW %d\n", inter_calc(deposit, rate, term));
	}
}


if(argc == 1){
	uasge

if(argc >=2){
	deposit = atoi(argv[1]);
if(argc>=3){
	rate = atof(argv[2])/100
