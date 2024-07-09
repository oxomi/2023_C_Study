#include <stdio.h>

//1

int main(void) {
	int a, r, n;
	int s, ai, i;

	scanf("%d%d%d", &a, &r, &n);

	ai = a;	// i = 1, the first term
	s = a;

	printf("%d ", a);
	for (i = 2; i <=  n; i++) 
	{
		ai = ai * r;
		s = s + ai;
		printf("%d", ai);

	}

	printf("= %d\n", s);

	return 0;
}