//csv �迭
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
-> �����ͷ� �ٲٴ� ���� ����



#include <stdio.h>
int csv_get_value(char str[]) {

	static int i = 0;
	int num = 0;

	if (i < 0) return -1;

	while (str[i] >= '0' && str[i] <= '9') {
		num = num * 10 + (str[i] - '0');
		i++;
	}

	//'\0' �̳� ','�� ������
	if (str[i] == '\0') i = -1;
	else i++; //str[i] = ','

	return num;
}


int main(void) {
	int num;

	while ((num = csv_get_value()) >= 0)
		printf("%d", num);
	return 0;
}


//����� �迭 ���� ���
int sum_w_size(int nums, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += nums[i];
	}
	return sum;
}

int main(void)
{
	int array1[3] = { 1,2,3 };
	int array2[5] = { 3,5,7,1,9 };
	int array3[] = { 1,9,2,8,3,7 };
	int s1, s2, s3;
	s1 = sum_w_size(array1, 3);
	s2 = sum_w_size(array2, 5);
	s3 = sum_w_size(array3,
		sizeof(array3) / sizeof(int));
	printf("Sum of Arrary1:%d\n", s1);
	printf("Sum of Arrary2:%d\n", s2);
	printf("Sum of Arrary3:%d\n", s3);
	return 0;
}


//������ �迭 ���ٹ�
int sum_w_endmark(int nums[]) {
	int i = 0;
	while (nums[i] != END_MARK) {
		sum += nums[i];
		i++;
	}
	retuen sum;
}

int main(void)
{
	int array1[4] = { 1,2,3,END_MARK };
	int array2[6] = { 3,5,7,1,9,END_MARK };
	int array3[] = { 1,9,2,8,3,7,END_MARK };
	int s1, s2, s3;
	s1 = sum_w_endmark(array1);
	s2 = sum_w_endmark(array2);
	s3 = sum_w_endmark(array3);
	printf("Sum of Arrary1:%d\n", s1);
	printf("Sum of Arrary2:%d\n", s2);
	printf("Sum of Arrary3:%d\n", s3);
	return 0;
}


//uniform rv
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, ranval;
	double uranval;
	srand(time(0));
	for (i = 0; i < 10; i = i + 1) {
		ranval = rand();
		uranval = rand()/RAND_MAX;
		printf(��Uniform random value on[0, 1]: % f\n", uranval);
	}
	return 0;
}


//uniform rv and dice
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N_DICE 10
double urand(void)
{
	return rand()/((double)RAND_MAX+1)
}
int main(void)
{
	int i, diceval;
	srand(time(0));
	for (i = 0; i < N_DICE; i = i + 1) {
		diceval = (int)(urand()*6)+1;
		printf("%dth Dice Value : %d\n", i, diceval);
	}
	return 0;

//dice 2
#define N_DICE 100
	double urand(void)
	{
		return rand() / ((double)RAND_MAX + 1);
	}
	int main(void)
	{
		int i, diceval;
		int N[6] = { 0,0,0,0,0,0 };
		double P[6];
		srand(time(0));
		for (i = 0; i < N_DICE; i = i + 1) {
			diceval = (int)(rand/((double)RAND_MAX+1);
			N[diceval - 1] = N[diceval - 1] + 1;
		}
		for (i = 0; i < 6; i = i + 1) {
			p[i] = n[i] / N_DICE
			printf("Pr(Dice=%d) == %f\n", (i + 1), P[i]);
		}
		return 0;
	}



	
//monte carlo simulation
#define N_MAX 1000000
	int main(void)
	{
		double monte_pi, x, y;
		int num_in = 0, num_out = 0;
		int n, i;
		srand(time(0));
		scanf("%d", &n);
		//[ �� : n ���� ���ǿ� �°� �ʿ��ϸ� �����϶�]
		if (n <= 0) 
			n = N_MAX;

		for (i = 0; i < n; i = i + 1) {
			//[ �� : [0,1) ������ ���� random�ϰ� ���� x, y���� ���϶�. ]
			x = (double)rand() / (RAND_MAX+1);
			y = (double)rand() / (RAND_MAX+1);
			//[ �� : x, y ���� Ȱ���Ͽ� ��ä�� �������� ���θ� �����ϰ�
			// num_in, num_out ���� �����϶� ]
			if (0 <= x * x + y * y && x * x + y * y <= 1) num_in++;
			else num_out++;

		}
		monte_pi = (4.0*num_in)/n ; //[ monte_pi ���� �����϶�. ]
		printf("Monte-Carlo PI = %.20f, (Number of Sample = %d)\n", monte_pi, n);
		return 0;
	}



//�ڱ�� ���ϴ� ���� �߿�
#include <stdio.h>
#define MAX_NUMBER	10000
	int not_selfnum(int n) {
		int sum = n; //����
		if (n / 10 == 0)
			return n + n;
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
			if (result < 10000) //����
				arr[result] = 1;
		}

		for (int j = 1; j < MAX_NUMBER; j++) {
			if (arr[j] == 0)
				printf("%d\n", j);
		}

		return 0;
	}
