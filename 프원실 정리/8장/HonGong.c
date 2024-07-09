//// csv를 포인터로
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
//            num = num * 10 + (*pstr - '0'); //else 안해주니까 틀림
//        }
//	}
//	sum += num;
//	printf("%d", sum);
//	return 0;
//}
//
//
//
////포인터 방법2
//#include <stdio.h>
//
//int main(void) {
//    char* pstr = str; // 포인터
//    int num = 0, sum = 0; // 숫자
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
////문자열 복사해오기. 배열 매개변수와 포인터 매개변수 활용.
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
//    *dest = '\0'; //널 전까지만 복사받았으니까 널은 내가 따로 넣어줘야 함.
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


//palindrom 외우기!!
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