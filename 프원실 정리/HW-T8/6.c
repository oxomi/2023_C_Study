#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE	1000
#define END_MARK -1

int get_len_max_min(int* pnums, int* pmax, int* pmin) {
	int* pcur = pnums;
	int len = 0;
	while (*pcur != END_MARK) { //'END_MARK' 따옴표를 붙이면 틀림
		len++;
		if (pcur == pnums) { //첫 인덱스에 든 숫자를 맥스와 민으로 일단 설정.
			*pmax = *pcur;
			*pmin = *pcur;
		}
		else if (pcur != pnums) {//pcur이 첫 인덱스가 아닐 때에 해
			if (*pmax < *pcur) *pmax = *pcur; //max, min 업데이트.
			if (*pmin > *pcur) *pmin = *pcur;
		}
		pcur++;

	}

	return len;
}

void generate_values(int* pnums) {
	int nseed = 0;
	int n_items;

	scanf("%d", &nseed);
	srand(nseed);

	n_items = rand() % 999 + 1;
	while (n_items) {
		*pnums++ = rand() % 10000;
		n_items--;
	}
	*pnums = END_MARK;

}

int main6(void) {
	int nums[MAX_SIZE];
	int max = 0, min = 0, len = 0;

	generate_values(nums);
	len = get_len_max_min(nums, &max, &min);

	printf("Length(Nums) = %d, Max(nums)=%d, Min(nums)=%d\n", len, max, min);
	return 0;
}