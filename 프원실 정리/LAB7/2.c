#include <stdio.h>
#include <time.h>

void print_local_time_after_kdays(time_t t, int k) {

	struct tm* time;
	time_t later = t + k * (24 * 60 * 60); //초로 만들어주기 위한 식
	time = localtime(&later);

	char* day[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" }; //이중 배열을 배열 길이에 제한을 두지 않기 위해 하나를 포인터로 선언해준 것! ex) day[0] 에는 sunday의 s의 주소가 들어간다.

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