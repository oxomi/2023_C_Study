#include <stdio.h>
#include <stdlib.h>

#define END_MARK	-1
#define MAX_SIZE	10000

int get_kth_largest(int* nums, int k) {

	int temp, len = 0;
	while (nums[i++] != -1) len++; //*(nums++) �ϸ� ���� ���� ���� : nums�� �����ͷ� ���� �Ǿ��� ������ nums++ �� �� ���� �ִµ� ��ȣ�� ���� ����� �ȴٴµ� ����


	if (k<1 || k>len) return -1;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (nums[j] < nums[j + 1]) {
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	return nums[k - 1];

	
}