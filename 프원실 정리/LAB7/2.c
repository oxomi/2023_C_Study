#include <stdio.h>
#include <time.h>

void print_local_time_after_kdays(time_t t, int k) {

	struct tm* time;
	time_t later = t + k * (24 * 60 * 60); //�ʷ� ������ֱ� ���� ��
	time = localtime(&later);

	char* day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" }; //���� �迭�� �迭 ���̿� ������ ���� �ʱ� ���� �ϳ��� �����ͷ� �������� ��! ex) day[0] ���� sunday�� s�� �ּҰ� ����.

	pritnf("&d/%d/%d, %02d:%02d:%02d, %s\n", time->tm_year + 1900, time->tm_mon + 1, time->tm_mday, time->tm_hour, time->tm_min, time->tm_sec, day[time->tm_wday]);
	return;
}

int main2(void) {
	int k = 0;
	time_t now = 1669856792; // 2022/12/01 01:06:32

	scanf("%d", &k);

	print_local_time_after_kdays(now, k);

	return 0;
}