//#include <stdio.h>
//
//typedef struct student {
//	int id;
//	char* pname;
//	double points;
//} STUD;
//
//int main(void) {
//	STUD pnucse[3] = { {1, "Choi", 9.9}, {2, "Park", 0.1}, {3, "Kim", 5.0 } };
//	int i = 0;
//	while (i < 3) {
//		printf("%d %s %lf\n", pnucse[i].id, pnucse[i].pname, pnucse[i].points);
//		i++;
//	}
//	return 0;
//}



#include <stdio.h>
typedef struct student {
	int id;
	char* pname;
	double points;
} STUD;
void stud_printx(STUD s)
{
	printf("[%d:%s] = %lf\n",
		s.id, s.pname, s.points);
}
void stud_swap(STUD *s1, STUD *s2)
{
	STUD ts;
	ts = *s1;
	*s1 = *s2;
	*s2 = ts;
}

int main(void)
{
	STUD s1 = { 1, "Choi", 9.9 };
	STUD s2 = { 2, "Park", 0.1 };
	stud_printx(s1);
	stud_printx(s2);
	stud_swap(&s1, &s2);
	stud_printx(s1);
	stud_printx(s2);
	return 0;
}