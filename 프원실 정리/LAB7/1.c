#include <stdio.h>
#include <stdlib.h>

#define END_MARK	-1
#define MAX_SIZE	10000

int get_kth_largest(int* nums, int k) {

	int temp, len = 0;
	while (nums[i++] != -1) len++; //*(nums++) 하면 오류 나는 이유 : nums가 포인터로 선언 되었기 떄문에 nums++ 을 할 수는 있는데 괄호를 뺴야 제대로 된다는데 왜지


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