//// csv�� �����ͷ�
//#include <stdio.h>
//
//int main(void) {
//	int sum = 0;
//	int num = 0;
//	char str[] = "123,456,789";
//	char* pstr;
//
//	for(pstr=str;*pstr!='\0'; pstr++) {
//		if (*pstr == ',') {
//			sum += num;
//			num = 0;
//		}
//        else {
//            num = num * 10 + (*pstr - '0'); //else �����ִϱ� Ʋ��
//        }
//	}
//	sum += num;
//	printf("%d", sum);
//	return 0;
//}
//
//
//
////������ ���2
//#include <stdio.h>
//
//int main(void) {
//    char* pstr = str; // ������
//    int num = 0, sum = 0; // ����
//    char str[] = "123,456,789";
// 
//    while (*pstr != '\0') { 
//        if (*pstr == ',') { 
//            sum += num;
//            num = 0;
//        }
//        else { 
//            num = num * 10 + (*pstr - '0');
//        }
//        pstr++; 
//    }
//    sum += num; 
//
//    printf("Sum of all values in CSV[%s] : %d", str, sum);
//    return 0;
//}
//
//
//
//
////���ڿ� �����ؿ���. �迭 �Ű������� ������ �Ű����� Ȱ��.
//#include <stdio.h>
//void mystrcpy(char dest[], char src[]) {
//    int i = 0, j = 0;
//    while (src[i])
//        dest[j++] = src[i++];
//    dest[j] = '\0';
//}
//void mystrcpy2(char* dest, char* src) {
//    while (*src != '\0') {
//        *(dest++) = *(src++);
//    }
//    *dest = '\0'; //�� �������� ����޾����ϱ� ���� ���� ���� �־���� ��.
//}
//int main(void)
//{
//    char mystr1[256];
//    char mystr2[256];
//    char mystr3[256];
//    gets(mystr1);
//    mystrcpy(mystr2, mystr1);
//    puts(mystr2);
//    mystrcpy2(mystr3, mystr1);
//    puts(mystr3);
//    return 0;
//}



////mystrcmp
//#include <stdio.h>
//int mystrcmp(char* lhs, char* rhs)
//{
//    // Enter your code here
//    while (*lhs == *rhs) {
//        if (*lhs == '\0') {
//            return 0;
//        }
//        lhs++;
//        rhs++;
//    }
//    return -1;
//}
//
//int main(void)
//{
//    char mystr1[256];
//    char mystr2[256];
//    gets(mystr1);
//    gets(mystr2);
//    if (mystrcmp(mystr1, mystr2) == 0)
//        puts("2 strings are equal");
//    else
//        puts("2 strings are different");
//    return 0;
//}


//palindrom �ܿ��!!
#include <stdio.h>

int ispalindrome(char* str)
{

}


int main(void)
{
    char buffer[1024];
    gets(buffer);
    printf("[%s] is ", buffer);
    if (ispalindrome(buffer))
        puts("a palindrome");
    else
        puts("not a palindrome");
    return 0;
}