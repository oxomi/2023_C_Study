#include <stdio.h>
#define NSIZE 3

void printNxN(int m[NSIZE][NSIZE]) {
	int i, j;
	char lineseg[8] = "-------";
	printf("+");
	for (i = 0; i < NSIZE; i++) printf("%s", lineseg);
	printf("+\n");
	for (i = 0; i < NSIZE; i++) {
		printf("|");
		for (j = 0; j < NSIZE; j++)
			printf("%6d ", m[i][j]);
		printf("|\n");
	}
	printf("+");
	for (i = 0; i < NSIZE; i++) printf("%s", lineseg);
	printf("+\n");
}

int main(void) {
	int A[NSIZE][NSIZE] = { {1,2,3}, {4,5,6},{7,8,9} };
	int B[NSIZE][NSIZE];
	int C[NSIZE][NSIZE];
	int D[NSIZE][NSIZE];


	for (int i = 0; i < NSIZE; i++) {
		for (int j = 0; j < NSIZE; j++) {
			B[i][j] = A[i][j] + 1;
		}
	}
	printNxN(B);


	for (int i = 0; i < NSIZE; i++) {
		for (int j = 0; j < NSIZE; j++){
			C[i][j] = 0; //초기화를 안해주니까 오류가 남
			for (int k = 0; k < NSIZE; k++) {
				C[i][j] += A[i][k] * B[k][j]; //+=
			}
		}
	}
	printNxN(C);


	for (int i = 0; i < NSIZE; i++) {
		for (int j = 0; j < NSIZE; j++) {
			D[i][j] = C[i][j] + 1;
		}
	}
	printNxN(D);
	
}